#include <bits/stdc++.h>

using namespace std;


class Graph
{
    private:
        int n;
        int **arr;

    public:
        Graph(int i)
        {
            n = i;

            arr = (int **) calloc(n, sizeof(int*));

            for(int i = 0; i < n; i++)
            {
                arr[i] = (int*)calloc(n, sizeof(int));
            }
        }

        void addEdge(int x, int y)
        {
            arr[x][y] = 1;
            arr[y][x] = 1;
        }

        void traverse()
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        void bfs(int a)
        {
            bool visited[n] = {0};
            queue<int>  q;
            
            cout << a << " ";
            visited[a] = 1;

            q.push(a);

            while(!q.empty())
            {
                int node = q.front();
                q.pop();

                for(int i = 0; i < n; i++)
                {
                    if(arr[node][i] == 1 && visited[i] == 0)
                    {
                        cout << i << " ";
                        visited[i] = 1;
                        q.push(i);
                    }
                }
            }
        }

        void dfs(int a, int *v)
        {
            cout << a << " ";
            v[a] = 1;

            for(int i = 0; i < n; i++)
            {
                if(arr[a][i] == 1 && v[i] == 0)
                {
                    dfs(i, v);
                }
            }
        }
};


class GraphL
{
    private:
        int n;
        list<int> *L;
    
    public:
        GraphL(int i)
        {
            n = i;
            L = new list<int>[n];
        }

        void addEdge(int x, int y)
        {
            L[x].push_back(y);
            L[y].push_back(x);
        }

        void traverse()
        {
            for(int i = 0; i < n; i++)
            {
                cout << i << ": ";
                
                for(int i : L[i])
                {
                    cout << " ->" << i;
                }
                cout << endl;
            }
        }
};

int main()
{
    Graph g(4);

    g.traverse();
    cout << endl;

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.traverse();
    g.bfs(0);

    int v[4] = {0};
    
    g.dfs(0, v);

    GraphL g1(4);

    g1.traverse();
    cout << endl;

    g1.addEdge(0,1);
    g1.addEdge(0,2);
    g1.addEdge(1,2);
    g1.addEdge(2,3);

    g1.traverse();


    cout << endl;
    cout << endl;
    cout << endl;


    return 0;
}