#include <iostream>

class abc
{
    public:
        int a,b;

    public:
        abc(): a(0),b(0) {}

        abc operator++(int)
        {
            abc ptr = *this;

            this->a++;
            this->b++;

            return ptr;
        }
        abc operator++()
        {
            this->a++;
            this->b++;

            return *this;
        }
};

int main()
{
    abc o;
    
    o++;
    ++o;

    std::cout << o.a << std::endl << o.b;
    return 0;
}
