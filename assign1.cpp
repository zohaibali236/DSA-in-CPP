#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float
        price_americanColonial = 85.00,
        price_modern = 57.50,
        price_frenchClassical = 127.75
    ;

    int
        americanColonial_sold,
        modern_sold,
        frenchClassical_sold
    ;

    cout << "Please input the number of American Colonial chairs sold\n";
    cin >> americanColonial_sold;

    cout << "Please input the number of Modern chairs sold\n";
    cin >> modern_sold;

    cout << "Please input the number of French Classical chairs sold\n";
    cin >> frenchClassical_sold;

    cout << setprecision(2) << fixed << showpoint;

    cout << "The total sales of American Colonial chairs $" << price_americanColonial*americanColonial_sold << "\n";
    
    cout << "The total sales of Modern chairs $" << price_modern*modern_sold << "\n";
    
    cout << "The total sales of French Classic chairs $" << price_frenchClassical*frenchClassical_sold << "\n";

    cout << "The total sales of all chairs $" << (price_americanColonial*americanColonial_sold + 
                                                    price_modern*modern_sold + 
                                                    price_frenchClassical*frenchClassical_sold);
    return 0;
}