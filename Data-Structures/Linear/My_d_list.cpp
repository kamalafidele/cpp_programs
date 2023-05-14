#include <iostream>
using namespace std;

class Node {
 public: 
  Node * next;
  Node * prev;
  int value;
  Node(int data){
      next = NULL;
      value = data;
      prev = NULL;
  }
};

class DoublyLinkedList {
 private :
   Node * head;
   Node * tail;
 public:
   DoublyLinkedList(){
       head = NULL;
       tail = NULL;
   } 

  void addBefore(int data){
      Node* newNode = new Node(data);
     if( head == NULL ){
         head = newNode;
         tail = head;
         return;
     }

     newNode->prev = head;
     head->next = newNode;
     head = newNode; 
  }

  void addAfter (int data){
      Node * newNode = new Node(data);
      if( tail == NULL ){
          tail = newNode;
          head = tail;
          return;
      }
      newNode->next = tail;
      tail->prev = newNode;
      tail = newNode;
  }

  void displayFromBefore(){
     if( head == NULL )
        cout << "The list is empty. " << endl;

     Node * current =  head;
     while(current != NULL ){
         cout << current->value << endl;
         current = current->prev;
     } 
  }  
 
 void displayFromAfter(){
     if( tail == NULL )
       cout << "The list is empty" << endl;

    Node * current = tail;
    while( current != NULL ){
         cout << current->value << endl;
         current= current->next;
    }   
 }
};

int takeInput ( ) {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  return num;
};

int main(){
  DoublyLinkedList dList;

  int choice = 0;
  int num;

  do{
    cout << "1. Add before " << endl;
    cout << "2. Add after " << endl;
    cout << "3. Display from before " << endl;
    cout << "4. Display from back " << endl;
    cout << "0. EXIT " << endl;
    cout << "Choose : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        num = takeInput();
        dList.addBefore(num);
       break;
    case 2:
        num = takeInput();
        dList.addAfter(num);
       break;
    case 3:
        dList.displayFromBefore();
       break;
    case 4:
        dList.displayFromAfter();
      break;
    case 0:
         exit(0);
      break;                 
    default:
        cout << "Please enter one of specified options " << endl;
    }
  } while( choice != 0);

 return 0;
}