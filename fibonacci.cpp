#include <iostream>
using namespace std;


int fib(int n)
{
    if(n == 0)
        return 0;
    
    if(n == 1)
        return 1;

    int a = fib(n-1);
    cout << a << " ";
    int b = fib(n-2);
    cout << b << " ";

    return a + b;
}

int main()
{
    cout << fib(5);
}