#include <iostream>

class complex
{
    private:
        int real, imaginary;

    public:
        friend std::istream& operator>>(std::istream& istreamobj, complex& cmplx)
        {
            istreamobj >> cmplx.real >> cmplx.imaginary;

            return istreamobj;
        }
        friend std::ostream& operator<<(std::ostream& ostreamobj, const complex& cmplx)
        {
            ostreamobj << cmplx.real << " + " << cmplx.imaginary << "i";

            return ostreamobj;
        }
};

int main()
{
    complex c;
    
    std::cin >> c;

    std::cout << c;
    
    return 0;
}