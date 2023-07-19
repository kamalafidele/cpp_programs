#include <iostream>

using namespace std;

class Node {
    public:
      int data;
      Node* next;
      Node* prev;

      Node() {
        this->next = NULL;
        this->prev = NULL;
      }

      Node(int value) {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
      }
};

class DoublyList {
    public: 
    Node* head;
    Node* tail;

    DoublyList() {
        this->head = NULL;
        this->tail = NULL;
    }

    void addToFront(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void addToBack(int value) {
        Node* newNode = new Node(value);
        
        if (!head) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void displayFromFront() {
        if (head == NULL) {
            cout << "They are no items in the list" << endl;
        } else {
            Node* currentNode = head;
            while(currentNode != NULL) {
                cout << currentNode->data << endl;
                currentNode = currentNode->next;
            }
        }
    }

    void displayFromBack() {
        if (tail == NULL) {
            cout << "They are no items in the list" << endl;
        } else {
            Node* currentNode = tail;
            while(currentNode != NULL) {
                cout << currentNode->data << endl;
                currentNode = currentNode->prev;
            }
        }
    }
};

int main () {
    DoublyList list;

    list.addToFront(10);
    list.addToFront(50);

    list.addToBack(45);
    list.addToBack(31);

    // list.displayFromFront();
    list.displayFromBack();

    return 0;
}