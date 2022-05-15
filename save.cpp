#include <iostream>
#include <list>
#include<time.h>
using namespace std;

class Graph {
    int V; // No. of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

    public:
    Graph(int V){
        this->V = V;
        adj = new list<int>[V];
    }

    void addEdge(int v, int w){
        //Undirected list
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void printVertexCover(){
        bool visited[V];
        for (int i=0; i<V; i++)
            visited[i] = false;

        list<int>::iterator i;

        // Consider all edges one by one
        for (int u = 0; u < V; u++){
            if (visited[u] == false){
                for (i = adj[u].begin(); i != adj[u].end(); ++i){
                    int v = *i;
                    if (visited[v] == false){
                        visited[v] = true;
                        visited[u] = true;
                        break;
                    }
                }
            }
        }

        cout << "\n\n";

        for (int i=0; i<V; i++)
            if (visited[i])
                cout << i << " ";

        cout << "\n\n";
    }
};

int main(){
    Graph graph(8);
    graph.addEdge(0, 1);
    graph.addEdge(0, 3);
    graph.addEdge(0, 5);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 7);
    graph.addEdge(3, 6);
    graph.addEdge(4, 7);
    graph.addEdge(5, 6);
    graph.addEdge(6, 7);

    graph.printVertexCover();

    return 0;
}