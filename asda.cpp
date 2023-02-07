#include <iostream>

using namespace std;

class Car
{
    public:
        string name;
        int model;

        void details()
        {
            cout << name << " " << model << "\n";
        }
};