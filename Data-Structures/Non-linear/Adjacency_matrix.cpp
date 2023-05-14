#include <iostream>
using namespace std;

class AdjacencyMatrix {
   private:
       int nodes;
       int ** matrix;

   public:
       AdjacencyMatrix(int nodeParam) {
           this->nodes =  nodeParam;
           matrix = new int*[nodes];

           for( int i = 0; i < nodes; i++) {
               matrix[i] = new int[nodes];
               for(int j = 0; j < nodes; j++) {
                   matrix[i][j] = 0;
                }
           }
       }
     
     void display() {
         for( int i = 0; i < nodes; i++) {
             for( int j = 0; j < nodes; j++) {
                 cout << matrix[i][j] << " ";
             }
             cout <<""<<endl;
         }
         cout << "End of graph " << endl;
     }

     //Adding edge means adding a link between nodes or vertices
     void addEdge(int originIndex, int destinationIndex) {
           if( originIndex >= nodes || destinationIndex >= nodes || originIndex < 0) {
                cout << "Invalid operation" << endl;
                return;
           }
            matrix[originIndex][destinationIndex] = 1;         
     }

     void deleteEdge(int originIndex, int destinationIndex) {
         if( originIndex >= nodes || destinationIndex >= nodes || originIndex < 0) {
                cout << "Invalid operation" << endl;
                return;
           } 
         matrix[originIndex][destinationIndex] = 0;
     }

};

int main() {
   int nodes = 0;
   cout << "Enter size: ";
   cin >> nodes;
   AdjacencyMatrix adjacencyMatrix(nodes);
   int choice = 0;
   int row;
   int col;

   do {
    cout << "################# AVAILABLE OPERATIONS ###############" << endl;   
    cout << "1. Add an edge " << endl;
    cout << "2. Delete an edge " << endl;
    cout << "3. Display the data in graph " << endl;
    cout << "0. Exit " << endl;
    cout << "Choose: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
         cout << "Enter row: ";
         cin >> row;
         cout << "Enter col: ";
         cin >> col;
        adjacencyMatrix.addEdge(row, col);
        break;
    case 2:
         cout << "Enter row: ";
         cin >> row;
         cout << "Enter col: ";
         cin >> col;
         adjacencyMatrix.deleteEdge(row,col);
         break;
    case 3:
         adjacencyMatrix.display();   
         break; 
    case 0:
         exit(0);
         break;  
    default:
         cout << "Choose please!"<<endl;
        break;
    }
   }while(choice != 0);

   return 0;
}