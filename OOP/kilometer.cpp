#include <iostream>
#include <string>
using namespace std;

class account
{
    private:
            int accID;
            string holderName;
            float balance;
    public:
            account(): accID(0), holderName(""), balance(0.0) {}
            account(int id)
            {
                accID = id;
                holderName = "";
                balance = 0.0;
            }
            account(int id, string n)
            {
                accID = id;
                holderName = n;
                balance = 0.0;
            }
            account(int id, string n, float b)
            {
                accID = id;
                holderName = n;
                balance = b;
            }
            account(account &acc)
            {
                accID = acc.accID;
                holderName = acc.holderName;
                balance = acc.balance;
            }
            void setdata(int id)
            {
                accID = id;
                holderName = "";
                balance = 0.0;
            }
            void setdata(int id, string n)
            {
                accID = id;
                holderName = n;
                balance = 0.0;
            }
            void setdata(int id, string n, float b)
            {
                accID = id;
                holderName = n;
                balance = b;
            }
            void display()
            {
                cout << "ID: " << accID << endl;
                cout << "Name: " << holderName << endl;
                cout << "balance: " << balance << endl << endl;
            }
};

int main()
{
    account a1, a2(1), a3(2,"test1") , a4(3,"test2", 1230.23), a5(a2);

    a1.display();
    a2.display();
    a3.display();
    a4.display();
    a5.display();

    a1.setdata(2);
    a1.display();
    a1.setdata(2, "test123");
    a1.display();
    a1.setdata(2, "test123123", 1999123.1289);
    a1.display();
}