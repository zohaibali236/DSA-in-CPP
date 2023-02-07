#include <bits/stdc++.h>
using namespace std;


int main()
{
    int arr[5][5] = {
             
        {0,1,1,1,0},
        {1,0,1,0,0},
        {1,1,0,0,1},
        {1,0,0,0,0},
        {0,0,1,0,0}
    };

    int visited[5] = {0};
    
    int k = 0;

    // cout << k;

    visited[k] = 1;

    stack<int> s;

    s.push(k);

    while(!s.empty())
    {
        int node = s.top();
        cout << node;
        s.pop();

        for(int i = 0; i < 5; i++)
        {
            if(arr[node][i] == 1 && visited[i] == 0)
            {
                // cout << i;
                visited[i] = 1;

                s.push(i);
            }
        }
    }

    return 0;
}