#include <iostream>

using namespace std;


int main()
{
    int salary, bonus, years, total_sales,  final_salary;

    cout << "Enter the monthly salary\n";
    cin >> salary;

    cout << "Enter the number of years the employee has been working for" << endl;
    cin >> years;

    cout << "Enter the total sales done by the employee" << endl;
    cin >> total_sales;


    if(years >=1 && years <= 5) {
        bonus += (1000/12);
    }
    else if(years > 5) {
        bonus += (2000/12);
    }
    if(total_sales > 50000 && total_sales < 100000){
        bonus += total_sales*(3.0/100);
    }
    else if(total_sales >= 100000) {
        bonus += total_sales*(6.0/100);
    }
    final_salary = salary + bonus;
    cout << final_salary << " is the final salary" << endl;
    return 1;
}

