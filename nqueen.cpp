#include <iostream>
using namespace std;


bool isSafe(int** arr, int r, int c, int n)
{
    for(int row = 0; row < n; row++)
    {
        if(arr[row][c] == 1)
        {
            return false;
        }
    }

    int row = r;
    int col = c;

    while(row >= 0 && col >= 0)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }

        row--;
        col--;
    }

    row = r;
    col = c;

    while(row >= 0 && col < n)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }

        row--;
        col++;
    }

    return true;
}



bool nQueen(int **arr, int r, int n)
{
    if(r >= n)
    {
        return true;
    }

    for(int col = 0; col < n; col++)
    {
        if(isSafe(arr, r, col, n))
        {
            arr[r][col] = 1;

            if(nQueen(arr, r+1, n))
            {
                return true;
            }

            arr[r][col] = 0;
        }

    }

    return false;
}


int main()
{
    int n;
    cin >> n;

    int **arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[n];

        for(int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    nQueen(arr, 0, n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

}