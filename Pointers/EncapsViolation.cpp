#include <iostream>

using namespace std;

class EncapsulationKilled{
  private:
    int i;

 public:
   int * exposeI(){
       return &i;
   }   
   int getI(){
       return i;
   }

};

int main(){
   EncapsulationKilled myObj;
   

   int* n=myObj.exposeI();
    *n=78;

   cout<<myObj.getI()<<endl;
    return 0;
}