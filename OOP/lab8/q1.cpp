#include <iostream>

class test
{
    private:
        int x;

    public:
        test(int a=0): x(a) {}

        bool operator!()
        {
            if(this->x == 0)
                return true;

            return false;
        }
};

int main()
{
    test t;

    if(!t)
        std::cout << "not" << std::endl;
    else
        std::cout << "yes" << std::endl;

    return 0;
}
