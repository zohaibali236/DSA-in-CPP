#include <iostream>

class rectangle
{
    private:
        int length,
            breadth
        ;
    public:
        rectangle(): length(1), breadth(1) {}
        rectangle(int l, int b): length(l), breadth(b) {}

        void area()
        {
            std::cout<< "The area is " << length*breadth << " sq m" << std::endl;
        }
        void perimeter()
        {
            std::cout<< "The perimeter is " << 2*(length+breadth) << std::endl;
        }       
};


int main()
{
    rectangle r1, r2(5, 10);

    r1.area();
    r1.perimeter();

    std::cout << std::endl;

    r2.area();
    r2.perimeter();
    
    return 0;
}