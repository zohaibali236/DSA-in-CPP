#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int fd = 0;
    for(int row = 0; row < arr.size(); row++)
    {
        for(int col = 0; col < arr.size(); col++)
        {
            if(col != row)
            {
                continue;
            }
            fd += arr[row][col];
        }
    }
    
    int ld = 0;
    for(int row = arr.size() - 1; row >= 0; row--)
    {
        for(int col = arr.size() - 1; col >= 0; col--)
        {
            if(col != row)
            {
                continue;
            }
            ld += arr[row][col];
        }
    }
    
    return abs(fd-ld);
}

int main()
{
    vector<vector<int>> ar;

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //         ar[i][j] = j;
    //     }
    // }

    cout << diagonalDifference(ar);
    cout << "kos";

}