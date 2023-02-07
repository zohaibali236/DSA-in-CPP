#include <iostream>
#include <list>

using namespace std;

class Graph
{
    private:
        int n;
        list<int> *L;

    public:
        Graph(int n)
        {
            this->n = n;
            L = new list<int>[n];
        }

        void addEdge(int x, int y)
        {
            L[x].push_back(y);
            L[y].push_back(x);
        }

        ~Graph()
        {
            delete(L);
        }
};

int main()
{
    Graph g(5);
}














int check(int *root, int &height)
{
    int lh = 0, rh = 0;

    int l = 0, r = 0;

    if(root == null)
    {
        height = 0;
        return height;
    }

    l = check(root, &height);
    r = check(root, &height);

    height = (lh > rh ? lh : rh) +1;

    if(l - r > 1) return 0;

    return l && r;
}