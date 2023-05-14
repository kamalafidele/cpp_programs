#include <iostream>
#include <vector>
using namespace std;

class AdjacencyList {
   private:
      int nodes;
      vector<int> *list; 

   public:
      AdjacencyList(int nodesParam){
          this->nodes = nodesParam;
          list = new vector<int>[nodes];
      }

      void display() {
          for(int i = 0; i < nodes; i++) {
              cout << "Node " << i + 1;
              for(auto v: list[i]) {
                  cout << "->" << v ;
              }
              cout << endl; 
          } 
       }

      void addEdge(int originIndex, int destIndex) {
            list[originIndex].push_back(destIndex);
            list[destIndex].push_back(originIndex);
      } 

      void deleteEdge(int originIndex, int destIndex) {
          for(int i = 0; i < list[originIndex].size(); i++) {
              if(list[originIndex][i] == destIndex ) {
                  list[originIndex].erase(list[originIndex].begin() + i);
              }
          }

          for(int i = 0; i < list[destIndex].size(); i++ ) {
              if(list[destIndex][i] == originIndex ) {
                 list[destIndex].erase(list[destIndex].begin() + i );
                 break;
              }
          }
      }
};

int main() {
    AdjacencyList adjacencyList(5);

    cout << "BEFORE ADDING " << endl;
    adjacencyList.display();
     
    adjacencyList.addEdge(1,2);
    adjacencyList.addEdge(3,1);
    adjacencyList.addEdge(2,3);
    adjacencyList.addEdge(3,2);
   
    cout << "AFTER ADDING " << endl;
    adjacencyList.display();

    adjacencyList.deleteEdge(3,1);
    adjacencyList.deleteEdge(3,2);

    cout << "After deleting " << endl;
    adjacencyList.display();
  return 0;
}