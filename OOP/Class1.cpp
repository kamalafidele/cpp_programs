#include <iostream>
#include <string>

using namespace std;

class Person{
private:
   string thoughts;

 public:
   int age;
   string name;
   void eat(int length,string food[]){
       cout<<"I am eating: ";
       for(int i=0; i<length; i++){
          cout<<food[i]<<" ";
       }
   }
   void setThouts(string pThoughts){
       thoughts=pThoughts;
   }

};

Person initiliazePerson(int age,string name);

int main(){
    int age;
    string name;
    string food[3]={"rice","meat","mango"};
    cout<<"Enter your name: ";
    getline(cin,name);
    
    cout<<"Enter your age: ";
    cin>>age;

    Person p1=initiliazePerson(age,name);
    int arrayLength=sizeof(food)/sizeof(food[0]);

    cout<<"My name is: "<<p1.name<<" I am "<<p1.age<<" old"<<endl;
    p1.eat(arrayLength,food);
    

    return 0;
}

Person initiliazePerson(int age, string name){
    Person p2;
    p2.name=name;
    p2.age=age;

    return p2;
}