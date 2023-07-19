#include <iostream>

using namespace std;

class Node {
    public:
      int data;
      Node* next;

      Node() {
        this->next = NULL;
      }

      Node(int value) {
        this->data = value;
        this->next = NULL;
      }
};

class DoublyList {
    public: 
    Node* node;

    DoublyList() {
        this->node = NULL;
    }

    void add(int value) {
        Node* newNode = new Node(value);
        
        if (node == NULL) {
            node = newNode;
        } else {
            Node* currentNode = node;
            while(currentNode->next != NULL) {
                currentNode = currentNode->next;
            }
            currentNode->next = newNode;
        }
    }

    void display() {
        if (node == NULL) {
            cout << "They are no items in the list" << endl;
        } else {
            Node* currentNode = node;
            while(currentNode != NULL) {
                cout << currentNode->data << endl;
                currentNode = currentNode->next;
            }
        }
    }
};

int main () {
    DoublyList list;

    list.add(10);
    list.add(20);
    list.add(12);
    list.add(5);

    list.display();

    return 0;
}