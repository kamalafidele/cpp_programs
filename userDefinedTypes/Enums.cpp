#include <iostream>
#include <string>
#include "Gender.h";

using namespace std;

struct Person{
 string name;
 Gender gender;
};



int main(){
    Person p1;
    
    string enteredGender;


    cout<<"Enter your name: ";
    getline(cin,p1.name);

    cout<<"Enter your gender: ";
    cin>>enteredGender;

       p1.gender=stringToEnumConverter(enteredGender);
     
    cout<<"Your name is "<<p1.name<<". Gender is "<<enumToString(p1.gender);
    return 0;
}