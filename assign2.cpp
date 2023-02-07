#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float
        total_sales,
        state_tax,
        local_tax
    ;

    cout << "please input the total sales for the month\n";
    cin >> total_sales;

    cout << "please input the state tax percentage in decimal form (.02 for 2%)\n";
    cin >> state_tax;

    cout << "please input the local tax percentage in decimal form (.02 for 2%)\n";
    cin >> local_tax;

    cout << setprecision(2) << fixed << showpoint;

    cout << "the total sales for the month is $" << total_sales << "\n";

    cout << "the state tax for the month is $" << total_sales*state_tax << "\n";

    cout << "the local tax for the month is $" << total_sales*local_tax << "\n";
}

//Zohaib Ali(SE-21043)