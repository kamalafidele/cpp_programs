#include <iostream>
using namespace std;
class Node {
    public:
         Node *prev;
         int data;
         Node * next;
         Node(int data){
             this->prev = NULL;
             this->data = data;
             this->next = NULL;
         }
};
class DoubleLinkedList{
    public:
        Node * head;
        Node * tail;
        DoubleLinkedList(){
            this->head = NULL;
            this->tail=NULL;
        }
        Node *addBefore(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return newNode;
            }
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return newNode;
        }
      void displayList(){
          if(head == NULL){
              cout<<"Empty List !!!"<<endl;
              return;
          }
          Node *current = head;
          while(current != NULL) {
              cout<< current->data << " ";
              current = current->next;
          }
      }
    Node * addAfter(int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return newNode;
        }
        Node *current= getLastNode();
        newNode->prev = current;
        current->next = newNode;
        return newNode;
    }
        void printBackWard(){
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        Node *current = getLastNode();
         while(current != NULL){
             cout<<current->data<<" "<<endl;
             current = current->prev;
         }
    }
   void insertAfter(Node * node, int data){
          Node * newNode = new Node(data);
          if(node->next == NULL){
              node->next=newNode;
              newNode->prev=node;
              tail=newNode;
              return;
          }

       Node * after = node->next;
       node->next= newNode;
       newNode->next=after;
       after->prev = newNode;
   }

   void insertBefore(Node * node, int data){
                 Node * newNode = new Node(data);
          if(node->next == NULL){
              node->prev=newNode;
              newNode->next=node;
              tail=newNode;
              return;
          }

       Node * before = node->prev;
       node->prev= newNode;
       newNode->prev=before;
       before->prev = newNode;
   }

       Node *getLastNode() {
        Node *tail = head;
        while(tail->next != NULL){
           tail = tail->next;
        }
        return tail;
    }

};

int main(){

    DoubleLinkedList list;
    list.addBefore(12);
    Node* nodeToAdd =list.addBefore(78);
    list.addBefore(89);
    list.addAfter(72);
    list.addAfter(90);
    list.addAfter(65);

    //list.insertBefore(nodeToAdd,80); 

    //cout<<"Printing backword"<<endl;
    ///list.printBackWard();

    cout<<"Printing forward"<<endl;
    list.displayList();

 return 0;
}