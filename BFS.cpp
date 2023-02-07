#include <bits/stdc++.h>
using namespace std;

void BFS(int arr[4][4], int k)
{
    int visited[4] = {0};

    cout << k;
    visited[k] = 1;

    queue<int> q;

    q.push(k);
    
    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i = 0; i < 4; i++)
        {
            if(arr[node][i] == 1 && visited[i] == 0)
            {
                cout << i;
                visited[i] = 1;
                q.push(i);
            }
        }
    }

}

void DFS(int arr[4][4], int v[4], int i)
{
    v[i] = 1;
    cout << i;

    for(int j = 0; j < 4; j++)
    {
        if(arr[i][j] == 1 && v[j] == 0)
        {
            DFS(arr, v, j);
        }
    }
}


int main()
{
    int arr[4][4] = {

        {0,1,1,0},
        {1,0,1,0},
        {1,1,0,1},
        {0,0,1,0}
    };

    BFS(arr, 0);

    int visited[4] = {0};
    cout << endl;

    DFS(arr, visited, 0);


    return 0;
}