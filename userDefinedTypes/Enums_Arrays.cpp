#include <iostream>
#include <string>
#include "Gender.h";

using namespace std;

struct Person{
 string name;
 Gender gender;
};

int main(){
    int n;
    cout<<"Enter number of People: ";
    cin>>n;
    string enteredGender;

    if(n<=0){
        return 0;
    }
   
   Person people[n];
   
   for(int i=0; i<n; i++){
       cout<<"Person "<<i+1<<" Name: "<<endl;
       cin >> people[i].name;
    
       cout<<"Person "<<i+1<<" Gender: "<<endl;
       cin >> enteredGender;
       people[i].gender=stringToEnumConverter(enteredGender);
   }
   
   cout<<"------------ PEOPLE DETAILS ----------"<<endl;
      for(int j=0; j<n; j++){
       cout<<"Person "<<j+1<<endl;
       
       cout<<"Name: "<<people[j].name<<endl;
       cout<<"Gender: "<<enumToString(people[j].gender)<<endl;
   }

    return 0;
}
