#include <iostream>
#define StackSize 15
using namespace std;
struct Data{
  int value;
};

class Stack{
 private:
  struct Data arr[StackSize];
  int top=-1;

public:

  void push(Data stackData){
      if(top == StackSize - 1){
          cout<<"Stack overflow"<<endl;
          return;
      }
      top++;
      arr[top]=num;
  }

  void pop(){
      if(top == -1)
      cout<<"Stack underflow"<<endl;
      else
      top--;
  }
  int peek(){
      if(top == -1)
        return INT16_MIN;
      else
      return arr[top];  
  }
 
 void display(){
     if(top > -1){
         for(int i=top; i>=0; i--){
             cout<<arr[i]<<endl;
         }
     }
 }
};
int main(){
   Stack stack;
   
   stack.push(14);
   stack.push(56);

   stack.display();

    return 0;
}