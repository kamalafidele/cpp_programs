#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

class Graph {
private:
    int v;
    list<int> *adj;

public:
    Graph(int nodes) {
        this->v = nodes;
        adj = new list<int>[nodes];
    }

    void addEdge(int src, int dest) {
        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }

    void display() {
        for (int i = 0; i < v; i++)
        {
            cout << "Node " << i + 1;
            for (auto v : adj[i])
            {
                cout << " -> " << v;
            }
            cout << endl;
        }
    }

    void topologicalSortUtil(int v, bool visited[], stack<int> &stack) {
        visited[v] = true;
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                topologicalSortUtil(*i, visited, stack);

        stack.push(v);
    }

    void topologicalSort() {
        stack<int> stack;
        bool *visited = new bool[true];
        for (int i = 0; i < v; ++i)
            visited[i] = false;

        for (int i = 0; i < v; i++)
            if (visited[i] == false)
                topologicalSortUtil(i, visited, stack);

        while (!stack.empty())
        {
            cout << stack.top() << " ";
            stack.pop();
        }
    }
};

int main() {
    
    Graph graph(12);

    graph.addEdge(1,3);
    graph.addEdge(1,2);
    graph.addEdge(3,5);
    graph.addEdge(3,9);
    graph.addEdge(2,7);
    graph.addEdge(7,6);
    graph.addEdge(5,9);
    graph.addEdge(5,6);
    graph.addEdge(7,6);
    graph.addEdge(6,8);
    graph.addEdge(8,10);

    graph.topologicalSort();
    cout << endl ;
    graph.display();
    
    return 0;
}