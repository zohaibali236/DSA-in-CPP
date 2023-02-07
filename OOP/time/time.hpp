#ifndef __time
    #define __time

#include <iostream>
class Time
{
    private:
            int hours, minutes, seconds;
    public:
            Time();
            Time(int, int, int);

            friend std::istream& operator >> (std::istream&, Time&);
            
            friend std::ostream& operator << (std::ostream&, const Time&);

            Time operator ++ (int);
            Time operator -- (int);

            Time operator ++ ();
            Time operator -- ();
};
#endif