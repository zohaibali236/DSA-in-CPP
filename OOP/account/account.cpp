#include <iostream>
using namespace std;

class Account
{
    private:
        int number;
        double balance;
    
    public:
        Account(): number(0), balance(0.0) {}

        void setData(int n, double b)
        {
            this->number = n;
            this->balance = b;
        }
        
        void showData()
        {
            cout << "Number: " << number << endl;
            cout << "Balance: " << balance << endl;
        }

};

int main()
{
    Account acc;

    acc.showData();
    cout << endl;
    cout << endl;

    acc.setData(1, 10050.75);

    acc.showData();

    return 0;
}