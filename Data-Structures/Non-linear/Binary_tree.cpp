#include <iostream>
#include <list>
#include <vector>
#include <stack>

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

class BinaryTree {
public:
    Node* root;
        
    BinaryTree(){
        this->root = NULL;
    }

    Node* addNode(Node* current, int data, bool isRight) {
        Node *newNode = new Node(data);
        if(current == NULL ) {
             root = newNode;
        } else {
             if(isRight)
             current->rightChild = newNode;
             else
             current->leftChild = newNode;
        }

        return newNode; 
        }

    void inOrderTraversal(Node* root) {
        if( root == NULL ){
           return;
        }
        inOrderTraversal(root->leftChild);
        cout << root->data << ",";
        inOrderTraversal(root->rightChild);
    }

    void  preOrderTraversal(Node* root) {
        if( root == NULL )
        return;

        cout << root->data << ",";
        preOrderTraversal(root->leftChild);
        preOrderTraversal(root->rightChild);
    }

    void postOrderTraversal(Node* root) {
        if( root == NULL ) 
        return;

        postOrderTraversal(root->leftChild);
        postOrderTraversal(root->rightChild);
        cout << root->data << ",";
    }

};

int main() {
    BinaryTree binTree;
    Node *root = binTree.addNode(NULL, 1,false);
    Node *left = binTree.addNode(root, 2, false);
    Node *right = binTree.addNode(root, 7, right);
    Node *leftLeft = binTree.addNode(left, 5, false);
    Node *leftRight = binTree.addNode(left, 4, true);
    Node *rightLeft = binTree.addNode(right, 9, false);
    Node *rightRight = binTree.addNode(right, 10, true);
    Node *leftLeftLeft = binTree.addNode(leftLeft, 0, false);
    Node *leftLeftRight = binTree.addNode(leftLeft, 3, true);
    Node *leftRightLeft = binTree.addNode(leftRight, 6, false);
    Node *rightLeftLeft = binTree.addNode(rightLeft, 0, false);
    Node *rightLeftRight = binTree.addNode(rightLeft, 11, true);
    Node *rightRightLeft = binTree.addNode(rightRight, 3, false);
    Node *rightRightRight = binTree.addNode(rightRight, 15, true);
    
    //binTree.inOrderTraversal(root);
    //binTree.preOrderTraversal(root);
    binTree.postOrderTraversal(root);
    return 0;
}