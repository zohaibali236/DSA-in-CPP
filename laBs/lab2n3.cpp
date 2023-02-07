#include <iostream>
using namespace std;

#define size_of(x)      ((sizeof(x))/(sizeof(x[0])))

void traverse(int *arr, const int &len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int *arr, int item, int index, int &len)
{
    for(int i = len-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = item;
    len++;
}

void deleteFrom(int *arr, int index, int &len)
{
    for(int i = index; i < len; i++)
    {
        arr[i] = arr[i+1];
    }
    len--;
}

int linearSearch(int *arr, int item, const int &len)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == item)
        {
            return i;
        }
    }
    return -1;
}


int binarySearch(int *arr, int item, const int &len, int &occurence)
{
    int beg = 0;
    int end = len;
    
    int mid = int(beg+end/2);

    while(beg <= end && arr[mid] != item)
    {
        if(item > arr[mid])
        {
            beg = mid + 1;
        }
        else if(item < arr[mid])
        {
            end = mid - 1;
        }
        
        mid = int((beg+end)/2);
    }

    if(arr[mid] == item)
    {
        int i = mid;
        while(arr[i] == item)
        {
            i++;
            occurence++;
        }
        return mid;
    }
    return -1;
}

int main()
{
    int n = 4;
    int arr[] = {2,4,6,8};

    insert(arr, 1, 0, n);
    traverse(arr, n);

    insert(arr, 5, 2, n);
    traverse(arr, n);

    insert(arr, 3, 4, n);
    traverse(arr, n);

    deleteFrom(arr, 0, n);
    traverse(arr, n);

    deleteFrom(arr, 1, n);
    traverse(arr, n);

    deleteFrom(arr, 2, n);
    traverse(arr, n);

    insert(arr, 8, 4, n);
    insert(arr, 9, 5, n);

    cout << endl;
    traverse(arr, n);

    cout << linearSearch(arr, 8, n) << endl;

    traverse(arr, n);

    int a=0;
    cout << binarySearch(arr, 8, n, a);
    cout << endl << a;

    return 0;
}