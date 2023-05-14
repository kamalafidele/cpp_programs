#include <iostream>
using namespace std;

class Node{
 public:
    int value;
    Node * next;

   Node(){
       this->next = NULL;
   }
   Node(int valueData){
       this->value = valueData;
       this->next = NULL;
   }
};

class LinkedList{
 private:
  Node * head;   
 
 public:
   
   LinkedList(){
        this->head = NULL;
   }

   void add(int data){
       Node *newNode = new Node(data);

       if(head == NULL){
         head = newNode;
         return;  
       } 

       Node * current = head;
       while(current != NULL){
           current = current->next;
       }
       current->next = newNode;
   }

   void display(){
       if(head == NULL){
           cout<<"The list is empty"<<endl;
           return;
       }
       Node * current=head;
       while(current != NULL){
           cout<<current->value<<endl;
           current=current->next;
       }
   }

};

int main(){
    LinkedList list;
    list.add(23);
    list.add(45);
    list.add(56);


    list.display();
    return 0;
}