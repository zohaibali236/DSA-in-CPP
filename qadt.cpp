#include <iostream>
#include <queue>

using namespace std;

void printQ(queue<int> q)
{
    if(q.empty())
    {
        cout << "Queue is Empty" << endl;
        return;
    }
    queue<int> temp = q;

    while(!temp.empty())
    {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;

    printQ(q);
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    printQ(q);
    q.pop();
    q.pop();
    printQ(q);
    q.pop();
    q.pop();
    printQ(q);

    return 0;
}