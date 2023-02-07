#include <iostream>
#include <iomanip>
using namespace std;

#define len(x)      (sizeof(x)/sizeof(x[0]))


void bubblesort(int* array, int len)
{
    bool swapped = false;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len - i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
    return;
}

void bubbleSort_recursive(int* array, int len, int loopingIndex)
{
    if(loopingIndex == len)
    {
        return;
    }

    bool swapped = false;

    for(int i = 0; i <= len - loopingIndex - 1; i++)
    {
        if(array[i] > array[i+1])
        {
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;

            swapped = true;
        }
    }

    if(!swapped)
    {
        return;
    }

    return bubbleSort_recursive(array, len, loopingIndex+1);
}

void traverse(int array[], int len)
{
    for(int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


void insertionSort(int *arr, int len)
{
    int key, j;

    for(int i = 1; i < len; i++)
    {
        key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return;
}

int main()
{
    int a[6] = {6,5,4,3,2,1};

    traverse(a, len(a));

    bubblesort(a, len(a));
    cout << "bubble sort: ";
    traverse(a, len(a));
    
    int b[6] = {6,5,4,2,3,1};
    traverse(b, len(b));

    bubbleSort_recursive(b, len(b), 0);
    cout << "bubble sort using recursion: ";
    traverse(b, len(b));

    int c[6] = {6,5,4,2,3,1};
    traverse(c, len(c));

    insertionSort(c, len(c));
    cout << "Insertion sort: ";
    traverse(c, len(c));

    return 0;
}