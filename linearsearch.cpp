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


int binarySearch(int *arr, int len, int item)
{
    int i = 0;
    int j = len - 1;
    int k = 0;

    while(i <= j)
    {
        int mid = (i+j)/2;

        if(arr[mid] == item)
        {
            i = mid + 1;
            k++;
        }
        else if(item > arr[mid])
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return (k == 0)?(-1):(k);
}


int main()
{
    int arr[10] = {2,5,5,5,6,6,8,9,9,9};
    int arr[4] = {2,4,6,8};

    int input;

    cin >> input;

    cout << "element " << input <<  " occurs " << binarySearch(arr, len(arr), input) << " times";

    int index = linearSearch(arr, len(arr), 8);

    cout << index << endl;

    cout << linearSearch(arr, len(arr), 3);

    return 0;
}