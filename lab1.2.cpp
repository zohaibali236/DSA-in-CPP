// This program demonstrates a compile error.
// Zohaib Ali(SE-21043)

#include <iostream>
using namespace std;
int main()
{
    int number;
    float total;
    cout << "Today is a great day for Lab";
    cout << endl << "Let's start off by typing a number of your choice" << endl;
    cin >> number;
    total = number * 2;
    cout << total << " is twice the number you typed" << endl;
    return 0;
}