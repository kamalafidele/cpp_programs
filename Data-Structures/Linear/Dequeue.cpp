#include <iostream>
#define MAX 100

using namspace std:

class Dequeue {
   public:
    int front=0;
    int rear=0;
    int size;
    int dequeue[MAX];

    Dequeue(int size){
        this->rear=0;
        this->front=-1;
        this->size=size;
    }

 bool isEmpty(){
    if(front == -1)
     return true;

    return false; 
 }
 bool isFull(){
  if(front == 0 && rear== size -1)
     return true;

  if(front == rear-1)
    return true;   

  return false;  
 }
  void addToFront(int data){
       if(isFull()){
           cout<<"Dequeue is full"<<endl;
           return;
       }

      if(front == -1){
          front = 0;
          rear = 0;
      }else if(front == 0){
           front=size-1;  
      }else {
          front=front-1;
      } 
    dequeue[front]=data;
  }

  void addToRear(int data){
       if(isFull()){
           cout<<"Dequeue is empty!"<<endl;
           return;
       }
       if(front == -1){
           front=0;
           rear=0;
       }
       else if(rear == size-1){
           rear=0;
       }else{
           rear++;
       }

       dequeue[rear] = data;
  }

  void deleteFromFront(){
      if(isEmpty()){
          cout<<"Dequeue is empty!"<<endl;
          return;
      }
       
      if(front == rear ){
          front=-1;
          rear=-1;
      }else if(front == size-1){
          front=0;
      }else{
          front++;
      }
           
  }

  void deleteFromRear(){
      if(isEmpty()){
          cout<<"Dequeue is empty!"<<endl;
          return;
      }
      else if(front== rear ){
          front=rear=-1;
      }else if(rear == 0){
           rear=size-1;
      }
      else{
          rear--;
      }
  }

  void display(){

  }
  
};

int main(){
    return 0;
}