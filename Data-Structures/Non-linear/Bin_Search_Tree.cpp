#include <iostream>

using namespace std;

class Node {
   public:
      int data;
      Node* rightChild;
      Node* leftChild;
      Node(int value) {
          this->data = value;
          this->rightChild = NULL;
          this->leftChild = NULL;
      } 
};

class BinarySearchTree {
   public:
      Node* add_node(Node * root, int value) {
         if(root == NULL ) 
         root = new Node(value);
         else {
            if ( root->data > value ) 
                root->leftChild = this->add_node(root->leftChild, value);
            else if(value > root->data) 
              root->rightChild = this->add_node(root->rightChild, value);
         }

         return root;
      }

      void inOrderTraversal(Node* root) {
        if(root == NULL )
        return;
        inOrderTraversal(root->leftChild);
        cout << root->data << endl;
        inOrderTraversal(root->rightChild);
      }  
      
};

int main() {
    BinarySearchTree binarySearchTree;
    Node* root = binarySearchTree.add_node(NULL,10);
    binarySearchTree.add_node(root, 5);
    binarySearchTree.add_node(root, 4);
    binarySearchTree.add_node(root, 2);
    binarySearchTree.add_node(root,1);
    binarySearchTree.add_node(root, 70);
    binarySearchTree.add_node(root, 100);
    binarySearchTree.add_node(root, 60);
    binarySearchTree.add_node(root, 40);
    binarySearchTree.add_node(root, 50);
    binarySearchTree.add_node(root, 80);


    binarySearchTree.inOrderTraversal(root);

    return 0;
}