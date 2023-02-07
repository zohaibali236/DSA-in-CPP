#include <iostream>
using namespace std;

#define len(x)      (sizeof(x)/sizeof(x[0]))

int linearSearch(int *arr, int len, int item)
{
    int i = 0;

    for(int i = 0; i < len; i++)
    {
        if(arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[4] = {2,4,6,8};
 
    int index = linearSearch(arr, len(arr), 8);
    cout << index << endl;
    cout << linearSearch(arr, len(arr), 3);

    return 0;
}
