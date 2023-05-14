#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> nums = {12, 34, 65, 7};
    vector<string> people;
    int n;
    char s;

    cout << "Program for recoding people in database " << endl;
    cout << endl;

    cout << "How many people do you want to record: ";

    cin>>n;
    s = cin.get();

    for (int j = 0; j < n; j++) {
        string personName;
        cout << "Person " << j + 1 << " : ";
        getline(cin, personName);
        people.push_back(personName);
    }


    cout << "List of recorded people" << endl;
    for (int i = 0; i < n ; i++) {
        cout << people.at(i) << endl;
    }

    return 0;
}