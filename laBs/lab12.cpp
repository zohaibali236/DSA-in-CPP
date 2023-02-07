#include <iostream>
#include <list>
#include <queue>
using namespace std;



class Graph
{
    private:
        int n;
        int e;
        list<int> *L;

    public:
        Graph(int n)
        {
            this->n = n;
            e = 0;
            L = new list<int>[this->n];           
        }
        void addEdge(int i, int j)
        {
            L[i].push_back(j);
            L[j].push_back(i);

            e++;
        }
        void dfs(int v, bool *vi)
        {
            vi[v] = 1;
            list<int>::iterator i;

            for(i = L[v].begin(); i != L[v].end(); ++i)
            {
                if(!vi[*i])
                {
                    dfs(*i, vi);
                }
            }
        }
        bool isConnected()
        {
            bool visited[n] = {0};

            dfs(0, visited);

            for(int i = 0; i < n; i++)
            {
                if(!visited[i])
                {
                    return false;
                }
            }

            return true;
        }

        bool isTree()
        {
            return isConnected() && e == n-1;
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
 }
