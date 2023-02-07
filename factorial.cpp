#include <iostream>

using namespace std;


int main()
{
    int n;
    n = 1;

    for(int i = 0; i < 4+1; i++)
    {
        if(i == 0) {
            continue;
        }
        n = n*i;
    }
    cout << n << endl;
}
