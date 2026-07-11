#include <iostream>
using namespace std;

class Graph {
private:
    static const int V = 5;
    int matriks[V][V];

public:
    Graph() {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                matriks[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int v) {
        matriks[u][v] = 1;
    }

    void printGraph() {
        cout << "Adjacency Matrix\n\n";

        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << matriks[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {

    Graph g;

    // Bogor(0)
    g.addEdge(0,2);

    // Bekasi(1)
    g.addEdge(1,0);
    g.addEdge(1,3);

    // Depok(2)
    g.addEdge(2,1);
    g.addEdge(2,3);
    g.addEdge(2,4);

    // Jakarta(3)
    g.addEdge(3,1);

	//Tangerang(4)
    g.addEdge(4,0);
    g.addEdge(4,2);

    g.printGraph();

    return 0;
}
