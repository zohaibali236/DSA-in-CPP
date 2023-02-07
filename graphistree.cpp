#include <bits/stdc++.h>
using namespace std;

class Graph
{
    private:
        int edges;
        int vertices;
        list<int> *L;
    
    public:
        Graph(int n)
        {
            edges = 0;
            vertices = n;
            L = new list<int>[n];
        }
        void addEdge(int i, int j)
        {
            L[i].push_back(j);
            L[j].push_back(i);
            edges++;
        }

        void DFS(int v, int *visited, int p)
        {
            visited[v] = 1;

            list<int>::iterator i;

            for(i = L[v].begin(); i != L[v].end(); ++i)
            {
                if(visited[*i] == 0)
                {
                    DFS(*i, visited, v);
                }
            }
        }

        bool isConnected()
        {
            int visited[vertices] = {0};

            DFS(0, visited, -1);

            for(int i = 0; i < vertices; i++)
            {
                if(visited[i] == 0)
                {
                    return false;
                }
            }

            return true;
        }

        bool isTree()
        {
            return isConnected() && (edges == (vertices - 1));
        }
};


int main()
{
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    
    if(g1.isTree())
    {
        cout << "Graph is Tree" << endl;
    } 
    else cout << "Graph is not Tree" << endl;
        
 
    Graph g2(5);
    g2.addEdge(1, 0);
    g2.addEdge(0, 2);
    g2.addEdge(2, 1);
    g2.addEdge(0, 3);
    g2.addEdge(3, 4);

    if(g2.isTree())
    {
        cout << "Graph is Tree" << endl;
    } 
    else cout << "Graph is not Tree" << endl;

    return 0;
}