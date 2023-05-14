#include <iostream>
#include <string>

using namespace std;

string takeInput(string label) {
    if (label == "email") {
        string email;
        cout << "Provide email: ";
        getline(cin, email);
        return email;
    }

    if (label == "name") {
        string name;
        cout << "Provide name: ";
        getline(cin, name);
        return name;
    }

    return "";
}

int main() {
    string name = takeInput("name");
    string email = takeInput("email");

    string rdPresident = "HE Paul Kagame";

    cout<<"Your name is: " << name <<endl;
    cout<<"Your email is: " << email <<endl;

    return 0;
}