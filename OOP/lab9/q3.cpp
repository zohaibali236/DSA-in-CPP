#include <iostream>
using namespace std;

class B
{
    public:
        B()
        {
            p = 0;
            q = 0;
        }
        B(int n)
        {
            p = n;
            q = n;
        }

        int getp() const
        {
            return p;
        }
        int getq() const
        {
            return q;
        }

    protected:
        int p;
    
    private:
        int q;
};

class D: public B
{
    public:
        D()
        {
            r=0;
        }
        D(int n): B(n)
        {
            r=n;
        }
        
        int getr() const
        {
            return r;
        }

    private:
        int r;
};

int main()
{
    D d(3);

    cout << d.getp() << "\t" << d.getq() << "\t" << d.getr() << endl;
}