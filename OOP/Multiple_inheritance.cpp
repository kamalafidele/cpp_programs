#include <iostream>

using namespace std;

class A{
 public:
   
   A(){
      cout<<"This is the A super class"<<endl;
  }
  A(int aNumberParam){
    aNumber=aNumberParam;
  }
  void hello(string msg){
      cout<<"Hello  you people from "<<msg<<endl;
  }
  int getAnumber(){
    return aNumber;
  }
  int num;

  private:
  int aNumber;
};
class B : public virtual A{
    public:
      B() : A(){
      
      cout<<"Class B is called "<<endl;
  }
  //   void hello(string msg){
  //     cout<<"Hello you people from "<<msg<<endl;
  // }
    string name;

};

class C:  public virtual A{
    public:
  C() : A(13){

      cout<<"Class C is called "<<endl;
  }
  //     void hello(string msg){
  //     cout<<"Hello you people from "<<msg<<endl;
  // }
    string company;

};
class D:  public C, public B{
  public:
   D() : A(45) {
      cout<<"Class D is called"<<endl;
  }
  string uniqueness;

};

int main(){
    // D dInstance;
    // cout<<dInstance.getAnumber() <<endl;
     //A aInstance;
    // dInstance.A::hello("D");
     C cInstance;
    // cInstance.A::hello("C");
    
    // dInstance.num=12;
    // dInstance.name="Kamara";
    // dInstance.company="Google";
    // dInstance.uniqueness="Multinational";

    // cout<<dInstance.num<<dInstance.name<<" "<<dInstance.uniqueness<<endl;

    cInstance.hello("C");
    ///aInstance.hello("A");
    //dInstance.hello("D");

    return 0;
}