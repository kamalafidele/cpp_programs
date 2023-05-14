#include<iostream>
#include<string>
using namespace std;

int main() {
    int age;
    string name;
    cout<< "enter name:";
    cin >> name;
    cout << "enter age:";
    cin >> age;

    if ( age >= 18)
    cout  << name << "allowed to vote" << endl;
    else
    cout<< name << "restricted to vote" << endl;
    return0;
}