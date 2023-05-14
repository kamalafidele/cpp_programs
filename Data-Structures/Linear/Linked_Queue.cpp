#include <iostream>
using namespace std;

class Node{
    public:
      int data; 
      Node * next;

     Node(){
         next=NULL;
     } 
     Node(int value){
         data=value;
         next=NULL;
     }
};
class Queue {
  public:
    Node * front;
    Node * rear;

    Queue(){
         rear=front=NULL;
    }

    void enqueue(int value){
        Node* temp = new Node(value);
        if(rear == NULL){
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    
    void display() {
        if( rear == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        
       Node * current=front;
       while(current != NULL){
           cout << current->data << endl;
           current = current->next;
       }

    }

   void dequeue(){
       if(front == NULL){
           cout<<"Queue is empty"<<endl;
           return;
       }
       Node* temp = front;
       front = front->next;
       if(front == NULL){
           rear = NULL;
       }

       delete temp;
   }
};

int main(){
    Queue queue;
    queue.enqueue(23);
    queue.enqueue(80);
    queue.enqueue(90);
    
    cout<<"BEFORE DELETING"<<endl;
    queue.display();
    queue.dequeue();
    
    cout<<"AFTER DELETING"<<endl;
    queue.display();
    return 0;
}