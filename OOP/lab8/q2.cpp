#include <iostream>

class A
{
    private:
            int x;
            float y;

    public:
        A(int a = 0, float b = 0): x(a), y(b) {}

        A operator+(const A& obj) const
        {
            A newobj;

            newobj.x = this->x + obj.x;
            newobj.y = this->y + obj.y;
            
            return newobj;
        }
};

int main()
{
    A a1(2, 3.5), a2(4, 5.5), res;

    res = a1+a2;

    return 0;
}