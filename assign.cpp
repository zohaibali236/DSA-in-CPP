#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float first_grade, second_grade, third_grade, avg;

    cout << "please input the first grade\n";
    cin >> first_grade;
    
    cout << "please input the second grade\n";
    cin >> second_grade;
    
    cout << "please input the third grade\n";
    cin >> third_grade;

    avg = (first_grade+second_grade+third_grade)/3;
    
    cout << setprecision(2) << fixed << showpoint;

    cout << "The average of the three grades is " << avg;

    return 0;
}