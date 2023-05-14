#include <iostream>
#include <bits/stdc++.h>
#include <list>
using namespace std;

class Graph
{
private:
    int v;
    list<int> *adj;

public:
    Graph(int nodes)
    {
        this->v = nodes;
        adj = new list<int>[nodes];
    }

    void addEdge(int src, int dest)
    {
        adj[src].push_back(dest);
        adj[dest].push_back(src);
    }

    void display()
    {
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

    void BFS(int startVertex)
    {
        vector<bool> visited(v, false);

        list<int> queue;

        visited[startVertex] = true;
        queue.push_back(startVertex);
        cout << "BFS RESULT from " << startVertex << ":" << endl;
        list<int>::iterator i;

        while (!queue.empty())
        {
            int currVertex = queue.front();
            cout << " " << currVertex << " ";
            queue.pop_front();
            for (i = adj[currVertex].begin(); i != adj[currVertex].end(); ++i)
            {
                int adjVertex = *i;
                if (!visited[adjVertex])
                {
                    visited[adjVertex] = true;
                    queue.push_back(adjVertex);
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    Graph graph(4);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);
    graph.display();
    graph.BFS(1);
}