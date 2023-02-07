#include <iostream>
using namespace std;


void bubbleSort(int *arr, const int &len)
{
    for(int i = 0; i < len; i++)
    {
        bool swapped = false;
        for(int j = 0; j < len - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}


void bubbleSort_R(int *arr, const int &len, int control)
{
    if(control == len - 1)
    {
        return;
    }

    bool swapped = false;
    for(int j = 0; j < len - control - 1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = true;
        }
    }
    if(!swapped)
    {
        return;
    }
    bubbleSort_R(arr, len, control+1);
}

void traverse(int *arr, const int &len)
{
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int *arr, const int &len)
{
    for(int i = 1; i < len; i++)
    {
        int j = i;

        while(j > 0 && arr[j] < arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
    }
}

int main()
{
    int arr[] = {3,6,2,1,9};
    int n = 5;

    // bubbleSort_R(arr, n, 0);
    insertionSort(arr, n);
    traverse(arr, n);
    system("pause");
    return 0;
}