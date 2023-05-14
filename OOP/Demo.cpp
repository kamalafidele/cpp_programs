#include <iostream>

using namespace std;

class Computer{
 private:
    int memory;
    string model;
 
 public:
   Computer(){
       cout<<"Computer class"<<endl;
   };
   Computer(int memo, string mod){
      memory=memo;
      model=mod;
   }
   int getMemory(){
       return memory;
   }
   string getModel(){
       return model;
   }
   void setMemory(int memo){
       memory=memo;
   }
   void setModel(string mod){
       model=mod;
   }
};

int main(){
    //Invoking default constructor
    Computer comp;

    //Invoking explicit constructor
    Computer comp1(12,"Positivo BGH");

    comp.setMemory(16);
    comp.setModel("HP Mercurial");
    //Computer comp(12,"Macurial HP");
    cout<<comp.getMemory()<<" "<<comp.getModel()<<endl;
    return  0;
}