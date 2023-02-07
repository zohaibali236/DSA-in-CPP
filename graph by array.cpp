#include <iostream>
using namespace std;

void addEdge(int i, int j, int arr[4][4])
{
    arr[i][j] = arr[j][i] = 1;
}

void print(int arr[4][4])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{    
    int arr[4][4] = {0};
    
    addEdge(0,1, arr);
    addEdge(0,2, arr);
    addEdge(1,2, arr);
    addEdge(2,3, arr);
    
    print(arr);
    
    return 0;
}