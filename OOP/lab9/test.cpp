#include <iostream>
using namespace std;

class c1
{
    protected:
        int a;

    public:
        friend istream operator >> (istream &obj, c1 c)
        {
            cout << "enter\n";
            obj >> a;

            return obj;
        }
};

class c2: public c1
{
    private: int b;

    public:

    friend istream operator >> (istream &obj, c2 c)
    {
        c1::>>c;
    }
};