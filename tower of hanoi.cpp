#include <iostream>
#include <cmath>
using namespace std;

void towerOfHanoi(int n, char beg, char aux, char end)
{
    if(n == 1)
    {
        cout << beg << "->" << end << endl;
        return;
    }
    towerOfHanoi(n-1, beg, end, aux);
    cout << beg << "->" << end << endl;
    towerOfHanoi(n-1, aux, beg, end);

    return;
}


void toh(int n, char beg, char aux, char end)
{
    int max_moves = (pow(2, n) - 1);

    if(n%2 == 0)
    {
        char temp = aux;
        aux = end;
        end = temp;
    }
    
    for(int i = 1; i <= max_moves; i++)
    {
        if(i%3 == 1)
        {
            cout << beg << "->" << end << endl;
        }
        else if(i%3 == 2)
        {
            cout << beg << "->" << aux << endl;
        }
        else if(i%3 == 0) cout << aux << "->" << end << endl;
    }
}


int main()
{
    towerOfHanoi(3, 'A', 'B', 'C');
    cout << endl;
    toh(3, 'S', 'A', 'D');
    return 0;
}