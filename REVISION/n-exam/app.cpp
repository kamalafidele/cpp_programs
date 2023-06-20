#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void showWelcomeScreen() {
    cout<<"==============================================="<<endl;
    cout<<""<<endl;
    cout<<"*  Welcome to Disease Cases Reporting System!     *"<<endl;
    cout<<""<<endl;
    cout<<"*  *************************************** *"<<endl;
    cout<<""<<endl;
    cout<<"*                               *"<<endl;
    cout<<""<<endl;
    cout<<"*It is developeed by Kamara fidele as practical*"<<endl;
    cout<<""<<endl;
    cout<<"*evaluation for the end of Year 3                  *"<<endl;
    cout<<""<<endl;
    cout <<"============================================="<<endl;
    cout<<""<<endl;
    cout<<"Need a help? Type 'help' then press Enter Key."<<endl;
    cout<<""<<endl;
};

void showHelpMenu() {
    cout << "======================================================" <<endl;
    cout << "" <<endl;
    cout << "*                          HELP MENU                         *" <<endl;
    cout << "" <<endl;
    cout << "======================================================" <<endl;
    cout << "Add <Location>                                 :Add a new location"<<endl;
    cout << "delete <Location>                              :Delete an existing location"<<endl;
    cout << "record <Location> <disease> <cases>            :Record a disease and its cases"<<endl;
    cout << "list locations                                 :List all existing locations"<<endl;
    cout << "list diseases                                  :List all existing diseases in locations"<<endl;
    cout << "where <disease>                                :Find where disease exists"<<endl;
    cout << "cases <location><disease>                      :Find cases of a disease in location"<<endl;
    cout << "cases <disease>                                :Find total cases of a given disease"<<endl;
    cout << "help                                           :Prints user manual"<<endl;
    cout << "Exit                                           :Exit the program"<<endl;
};

vector<string> tokenizeStr(string str) {
    vector<string> tokens;
    string token;
    stringstream strRefrence(str);

    while(getline(strRefrence, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
};

vector<string> readData(string fileName) {
    vector<string> diseases;
    fstream file(fileName);
    string readText;
    
    while(getline(file, readText)) {
        diseases.push_back(readText);
    }

    file.close();

    return diseases;
};

void writeData(string fileName, string data) {
    ofstream file;

    file.open(fileName, ios_base::app);
    file<<data + "\n";
    file.close();
}

void displayList(vector<string> list) {
    sort(list.begin(), list.end());

    for (int i = 0; i < list.size(); i++) {
        cout << list[i] <<endl;
    }
}

void getCases() {
    int casesNumber = 0;

};

vector<string> searchDiseaseByWhere(string disease) {
    vector<string> diseases = readData("diseases.txt");
    vector<string> foundLocations;

    for (int i = 0; i < diseases.size(); i++) {
        string currentLine = diseases.at(i);
        transform(currentLine.begin(), currentLine.end(), currentLine.begin(), ::tolower);

        vector<string> tokenized = tokenizeStr(currentLine);
        if (tokenized[1] == disease) foundLocations.push_back(currentLine);
    }

    return foundLocations;
};

vector<string> extractDiseases(vector<string> diseases) {
    vector<string> extractedDiseases;
    for (int i = 0; i < diseases.size(); i++) {
        vector<string> tokenized = tokenizeStr(diseases.at(i));
        extractedDiseases.push_back(tokenized[0]);
    }

    return extractedDiseases;
};

int calculateDiseasesCases(vector<string> diseases, string disease) {
    int cases = 0;
    for (int i = 0; i < diseases.size(); i++) {
        vector<string> tokenized = tokenizeStr(diseases.at(i));
        cases += stoi(tokenized[2]);
    }

    return cases;
};

int  main () {
    string command = "";
    string mainCommand = "";
    showWelcomeScreen();
    
    do {
    cout << "Console > ";

    getline(cin, command);

    transform(command.begin(), command.end(), command.begin(), ::tolower);
    vector<string> userArgs = tokenizeStr(command);
    mainCommand = userArgs[0];

        if (mainCommand == "help") {
           showHelpMenu();
        } 
        else if (mainCommand == "add") {
            writeData("locations.txt", userArgs[1]);
            cout << "Location " << userArgs[1] << " is successfully added!" << endl;
        }
        else if (mainCommand == "record") {
            writeData("diseases.txt", userArgs[1] + " " + userArgs[2] + " " + userArgs[3]);
        }
        else if (mainCommand == "list") {
            string secondCommand = userArgs[1];

            if (secondCommand == "locations") {
                vector<string> locations = readData("locations.txt");
                displayList(locations);
            }
            if (secondCommand == "diseases") {
                vector<string> diseases = readData("diseases.txt");
                vector<string> filteredDiseases = extractDiseases(diseases);

                displayList(filteredDiseases);
            }
        }
        else if (mainCommand == "where") {
            vector<string> diseases = searchDiseaseByWhere(userArgs[1]);
            vector<string> filteredDiseases = extractDiseases(diseases);
            
            if (filteredDiseases.size() == 0) cout << "No location with this disease" << endl;
            else displayList(filteredDiseases);
        }
        else if (mainCommand == "cases") {
            if (userArgs.size() == 2) {
                vector<string> diseases = searchDiseaseByWhere(userArgs[1]);
                int cases = calculateDiseasesCases(diseases, userArgs[1]);
                cout << "Total cases of " << userArgs[1] << " = " << cases <<endl;
            }
        }
    } while(mainCommand != "exit");

    return 0;
}