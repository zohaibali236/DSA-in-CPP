#include <iostream>
#include <string>

class BankAccount
{
    private:
        int accountNumber;
        std::string holderName;
        float balance;

    public:
        BankAccount(): accountNumber(0), holderName(""), balance(0.0) {}
        BankAccount(int id): accountNumber(id), holderName(""), balance(0.0) {}
        BankAccount(int id, std::string name): accountNumber(id), holderName(name), balance(0.0) {}
        BankAccount(int id, std::string name, float bal): accountNumber(id), holderName(name), balance(bal) {}

        void Display()
        {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Holder Name: " << holderName << std::endl;
            std::cout << "Account Balance: " << balance << std::endl;
        }
};


int main()
{
    BankAccount acc1, acc2(1), acc3(2, "xyz", 112312.123);

    acc1.Display();
    std::cout << std::endl;
    std::cout << std::endl;
    
    acc2.Display();
    std::cout << std::endl;
    std::cout << std::endl;
    
    acc3.Display();

    return 0;
}