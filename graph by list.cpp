#include <iostream>
#include <list>

using namespace std;

class Graph
{
    private:
        int n;
        list<int> *l;
    public:
        Graph(int s)
        {
            n = s;
            l = new list<int>[n];
        }

        void addEdge(int i, int j)
        {
            l[i].push_back(j);
            l[j].push_back(i);
        }
        void print() 
        {
            for(int i = 0; i < n; ++i)
            {
                cout << i << ":";
                for(auto j : l[i])
                {
                    cout << "->" << j;
                }
                cout << endl;
            }
        }
};

int main()
{
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);

    g.print();

    return 0;
}