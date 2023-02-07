// Zohaib Ali(SE-21043)

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
    int area, perimeter;

    area = LENGTH * WIDTH;
    perimeter = 2*(LENGTH+WIDTH);


    cout << "The area of the rectangle is: " << area << "\n";
    cout << "The perimeter of the rectangle is: " << perimeter << "\n";
    return 0;
}