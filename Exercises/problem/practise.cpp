#include <iostream>
#include <vector>

using namespace std;

class Graph{
private:
    vector<vector<int>> adjList;
    bool isDirected;

public:
    Graph(int vertices, bool directed = false){
        adjList.resize(vertices);
        isDirected = directed;
    }

    void addEdge(int src, int dest){
        adjList[src].push_back(dest);

        // Undirected ဖြစ်မှသာ အပြန်အလှန် (dest ကနေ src ကိုပါ) ထည့်ပေးရပါမယ်
        if(!isDirected){
            adjList[dest].push_back(src);
        }
    }

    void printGraph(){
        for(int i = 0; i < adjList.size(); ++i){
            cout << i << ": ";
            for(int j = 0; j < adjList[i].size(); ++j){
                cout << adjList[i][j] << " -> ";
            }
            cout << "NULL" << endl;
        }
    }
};

int main(){
    int vertices = 3;
    Graph undirectedGraph(vertices); // directed = false (Undirected graph)
    undirectedGraph.addEdge(0, 1);
    undirectedGraph.addEdge(0, 2);
    undirectedGraph.addEdge(1, 2);

    cout << "Undirected Graph Adjacency List: " << endl;
    undirectedGraph.printGraph();

    return 0;
}
