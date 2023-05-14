#include <iostream>

using namespace std;

class Node {
 public:
   int data;
   Node * next;
   
   Node() {
       this->next = NULL;
   }
   
   Node(int dt){
    this->data = dt;
    this->next = NULL;
   }
};

class LinkedList{
   public:
     Node * head;

     LinkedList() {
         this->head = NULL;
     }

     void addNewNode(int dt) {
         Node *newNode = new Node(dt);
         if(head == NULL){
             head = newNode;
             return ;
         }

         Node *current = head;
         while(current->next != NULL) {
             current = current->next;
         }
         current->next = newNode;
     }

     void display() {
         if(head == NULL){
             cout<<"Empty List"<<endl;
             return ;
         }

         Node * current = head;
         while(current != NULL) {
             cout<<current->data<<endl;
             current = current->next;
         }
     }

     void deleteNodeAt(int nodePosition) {
        if(head == NULL){
            cout<<"Empty list "<<endl;
            return;
        }
        if(nodePosition == 1){
            Node * temp = head;
            head = head->next;
            delete temp;
            return;
        }   
       Node * previous;
       Node *current = head; 
       int nodeCount;

       while(current != NULL) {
           nodeCount++;
           current = current->next;
       }

       if(nodeCount < nodePosition )  return;

       current = head;
       while(nodePosition > 1) {
         nodePosition --;
         previous = current;
         current = current->next;
       }

       previous->next = current->next;
       delete current;

     }

     void insertNode(int position, int data) {
         Node * newNode = new Node(data);
         if(head == NULL){
             if(position > 1)
               return;
           head = newNode;    
           return;
         }
      Node * current = head;
      int size = 0;
      while(current != NULL){
         size++;
         current = current->next;
      }

      if(size<position)
        return ;

     if(position == 1) {
       Node * temp = head;
       newNode->next = temp;
       head = newNode;
       return;   
     }
   
     Node * previous;
     current = head;
     while(position > 1){
         position--;
         previous = current;
         current = current->next;
     }
     previous->next = newNode;
     newNode->next = current;
     }

     Node * searchByPosition(int position) {
         if(head == NULL)
            return NULL;

         int size = 0;
         Node * current = head;

         while(current != NULL){
             size++;    
             if(size == position)
               return current;

             current = current->next;
         }   
        
           return NULL;
     }     

     void swapNodes() {
        Node *current = head;
        Node *new_start = current->next;

        while( 1 ) {
              cout << "SWAPPING" << endl;
              Node *q = current->next;
              Node *temp = q->next;
              q->next = current;
              if( temp == NULL || temp->next ==  NULL){
                current->next = NULL;
                break;
              }

              current->next = temp->next;
              current = temp;
        }

     }
};

int main() {
    LinkedList list;

     for(int i = 0; i <= 10; i++)  list.addNewNode(i*4);

    list.display();
    
    cout << endl;
    list.swapNodes();
    cout << "AFTER SWAPPING " << endl;
    list.display();

    list.swapNodes();

    cout << "AFTER SWAPPING SECOND TIME " << endl;
    list.display();
    
    // list.insertNode(1,800);
    // list.display();

    //  Node * myItem=list.searchByPosition(3);
    //  if(myItem) 
    //    cout<<myItem->data<<endl;
    //  else
    //    cout<<"NOT Found "<<endl;  

    // list.deleteNodeAt(3);
    // cout<<"After deleting"<<endl;
    // list.display();

    return 0;
}