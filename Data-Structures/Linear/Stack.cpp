#include <iostream>
using namespace std;
const int numbers = 20;
int top = -1;
int stack[numbers];

int isFull()
{
    if (top == numbers - 1)
        return 1;
    return 0;
}
void push(int data){
    if(!isFull()){
        top++;
        stack[top] = data;
    }else{
        cout << "Stack overflow";
    }
}
int isEmpty(){
    if(top == -1)
        return 1;
    return 0;
}
void pop(){
    if(!isEmpty()){
        top--;
    }
    else{
        cout << "The stack underflow";
    }
}
int peek(){
    if(!isEmpty())
        return stack[top];
    return INT16_MIN;  
}
void display(){
    if(!isEmpty()){
        for(int i = top ; i >= 0 ; i--){
            cout << stack[i] << endl;
        }
    }
}

int main(){

    int option=0;
    int num;
     do{ 
      cout<<"1. PUSH "<<endl;
      cout<<"2. PEEK "<<endl;
      cout<<"3. DISPLAY "<<endl;
      cout<<"4. POP "<<endl;

      cout<<"Choose an option: ";
      cin >> option;

      switch (option)
      {
      case 1: 
          cout<<"Enter a number: ";
          cin>>num;
          push(num);
      break;
      case 2:
         peek();
       break;
      case 3:
       display();
      break;
      case 4:
        pop();
      break;
      default:
       display();
       break;        
      
      }

     }while(option != 0);

    return 0;
}