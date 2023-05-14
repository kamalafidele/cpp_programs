#include <iostream>
#include <string>

using namespace std;

class Employee{
 private:
   float salary;
public:
   string name;
   void setSalary(float empSalary){
       salary=empSalary;
   }

   float getSalary(){
       return salary;
   }
};

class Programmer: public Employee{
 private:
    string company;

  public:
    Programmer(float empSalary){
        setSalary(empSalary);
    }
    void setCompany(string comp){
        if(comp !=  "None")
           company=comp;
    }
    string getCompany(){
        return company;
    }
   
    
};

int main(){
Programmer obj(35000);
string companyName;
string name;
cout<<"Enter your name: ";
getline(cin, name);
cout<<"What is your company: ";
getline(cin,companyName);
obj.setCompany(companyName);
obj.name=name;
cout<<"Programmer name: "<<obj.name<<endl;
cout<<"Programmer company: "<<obj.getCompany() << endl;
cout<<"Programmer salary: "<<obj.getSalary()<<endl;

return 0;
}