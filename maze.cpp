#include <iostream>
using namespace std;

const int n = 4;

int main()
{
    int maze[n][n] = {
        {1,0,0,0},
        {1,1,0,1},
        {0,1,0,0},
        {1,1,1,1}
    };

    int ans[n][n] = {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    int k = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = k; j < n; j++)
        {
            if(maze[i][j] == 0)
            {
                k = j - 1;
                break;
            }
            else ans[i][j] = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

}