#include <iostream>
using namespace std;

#define len_of(x) (sizeof(x)/sizeof(x[0]))

void traverse(int arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteItemAtIndex(int arr[], int &len, int index)
{
    int i = index;

    while(index < (len-1))
    {
        arr[index] = arr[index + 1];
        index++;
    }
    len--;
}

void InsertAtIndex(int arr[], int &len, int index, int item)
{
    int i = len - 1;

    while(i >= index)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[index] = item;
    len++;

}

int main()
{
    int arr[] = {2,4,6,8};

    int size = len_of(arr);

    traverse(arr, size);

    InsertAtIndex(arr, size, 0, 1);
    traverse(arr, size);

    InsertAtIndex(arr, size, 2, 5);
    traverse(arr, size);

    InsertAtIndex(arr, size, 4, 3);
    traverse(arr, size);

    deleteItemAtIndex(arr, size, 0);
    traverse(arr, size);

    deleteItemAtIndex(arr, size, 1);
    traverse(arr, size);
    
    deleteItemAtIndex(arr, size, 2);
    traverse(arr, size);

    return 0;
}