#include <bits/stdc++.h>
using namespace std;


int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n*factorial(n-1);
}


int factorial_i(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}


int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

void fib(int n)
{
    int 
        a = 1,
        b = 1,
        c = 0
    ;

    for(int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}


void toh(int n, char beg, char aux, char end)
{
    if(n == 1)
    {
        cout << beg << "->" << end << endl;
        return;
    }

    toh(n-1, beg, end, aux);
    cout << beg << "->" << end << endl;
    toh(n-1, aux, beg, end);
     
    return;
}


void tohi(int n, char beg, char end, char aux)
{
    int total_moves = pow(2,n) -1;

    for(int i = 1; i <= total_moves; i++)
    {
        if(i%3 == 1)
        {
            cout << beg << "->" << end << endl;
        }
        else if(i%3 == 2)
        {
            cout << aux << "->" << end << endl;
            
        }
        else cout << beg << "->" << aux << endl;
    }
}

int main()
{
    cout << fibonacci(5) << endl;
    cout << factorial_i(4) << endl;

    toh(3, 'A', 'B', 'C');
    cout << endl;
    tohi(3, 'A', 'C', 'B');

    fib(5);
    return 0;
}