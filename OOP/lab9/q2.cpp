#include <iostream>

class rectangle
{
    protected:
        int
            length,
            width
        ;
    
    public:
        int getPerimeter()
        {
            return (2*(length + width));
        }

        int getArea()
        {
            return length*width;
        }
        
        void getdata()
        {
            std::cout << "enter length\n";
            std::cin >> length;

            std::cout << "enter width\n";
            std::cin >> width;
        }
};

class boxType: public rectangle
{
    private:
        int height;

    public:
        void getdata()
        {
            rectangle::getdata();

            std::cout << "enter height\n";
            std::cin >> height;
        }
        int getPerimeter()
        {
            return (4*(length+width+height));
        }
        int getArea()
        {
            return ((2*(length*width)) + (2*(length*height)) + (2*(height*width)));
        }
        int getVolume()
        {
            return (length*width*height);
        }


};

int main()
{
    boxType b;

    b.getdata();

    return 0;
}