#ifndef __complex_no
    #define __complex_no

#include <iostream>
class complex
{
    private:
        int real,
            imaginary
        ;

    public:
        complex();

        complex(int, int);
        
        complex(complex &c);

        complex operator + (complex &c);

        friend std::ostream& operator << (std::ostream&, const complex&); 
};
#endif