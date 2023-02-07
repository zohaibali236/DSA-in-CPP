#include "complex.h"

#include <iostream>

using namespace std;


complex::complex()
{
    this->real = 0;
    this->imaginary = 0;
}

complex::complex(int real, int img)
{
    this->real = real;
    this->imaginary = img;
}

complex::complex(complex &c)
{
    this->real = c.real;
    (*this).imaginary = c.imaginary;
}

complex complex::operator+(complex &c)
{
    complex answer;

    answer.real = this->real + c.real;
    answer.imaginary = (*this).imaginary + c.imaginary;

    return answer;
}

ostream& operator << (ostream& osobj, const complex& complxobj)
{
    osobj << "x + yi = " << complxobj.real << " + " << complxobj.imaginary;

    return osobj;
}

int main()
{
    complex c1(2,4), c2(c1);

    cout << c1;
    cout << endl;

    cout << c2;    
    cout << endl;

    complex result;
    
    result = c1+c2;

    cout << result;

    return 0; 
}
