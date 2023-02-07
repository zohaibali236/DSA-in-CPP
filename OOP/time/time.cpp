#include "time.hpp"

#include <iostream>


Time::Time(): seconds(0), minutes(0), hours(0) {}
Time::Time(int h, int m, int s): hours(h), minutes(m), seconds(s) {}

std::ostream& operator << (std::ostream& ostreamobj, const Time& timeobj)
{
    ostreamobj << timeobj.hours << ":" << timeobj.minutes << ":" << timeobj.seconds;

    return ostreamobj;
}

std::istream& operator >> (std::istream& istreamobj, Time& timeobj)
{
    istreamobj >> timeobj.hours >> timeobj.minutes >> timeobj.seconds;

    return istreamobj;
}

Time Time::operator++(int)
{
    Time ptr = *this;

    if(this->seconds < 60)
        this->seconds++;
    else
    {
        this->minutes++;
        this->seconds = 1;

        if(this->minutes > 60)
        {
            this->minutes=0;
            this->hours++;

            if(this->hours > 24)
            {
                this->hours = 0;
                this->minutes = 0;
                this->seconds = 1;
            }
        }   
    }
    return ptr;
}

Time Time::operator++()
{
    if(this->seconds < 60)
        this->seconds++;
    else
    {
        this->minutes++;
        this->seconds = 1;

        if(this->minutes > 60)
        {
            this->minutes=0;
            this->hours++;

            if(this->hours > 24)
            {
                this->hours = 0;
                this->minutes = 0;
                this->seconds = 1;
            }
        }  
    }
    return *this;
}

Time Time::operator--(int)
{
    Time ptr = *this;

    this->seconds--;

    if(this->seconds <= 0)
    {
        this->seconds=60;
        this->minutes--;

        if(this->minutes < 0)
        {
            this->hours--;
            this->minutes=60;
            this->seconds=60;
        }

            this->seconds=60;
        if(this->hours < 0)
        {
            this->hours=24;
            this->minutes=60;
            this->seconds=60;
        }
    }
    return ptr;
}

Time Time::operator--()
{
    this->seconds--;

    if(this->seconds <= 0)
    {
        this->seconds=60;
        this->minutes--;

        if(this->minutes < 0)
        {
            this->hours--;
            this->minutes=60;
            this->seconds=60;
        }

            this->seconds=60;
        if(this->hours < 0)
        {
            this->hours=24;
            this->minutes=60;
            this->seconds=60;
        }
    }
    
    return *this;
}

int main()
{
    Time clock;

    std::cin >> clock;

    std::cout << clock;

    std::cout << std::endl;
    clock++;
    std::cout << clock << std::endl;

    clock--;
    std::cout << clock << std::endl;
    return 0;
}
