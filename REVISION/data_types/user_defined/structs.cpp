#include <iostream>

using namespace std;

struct Person {
    string name;
    int age;
    string nationality;
};

int main () {
    Person p1;

    cout << "CREATING A PERSON PROFILE " << endl;

    cout << "Enter the name: ";
    getline(cin, p1.name);

    cout << "Enter the age: ";
    cin>>p1.age;

    cout << "Enter the nationality: ";
    cin>>p1.nationality;

    cout << "THIS IS THE CREATED PROFILE"<<endl;
    cout << "Name: " << p1.name << " Age: " << p1.age << " Nationality: " << p1.nationality << endl;
    return 0;
}