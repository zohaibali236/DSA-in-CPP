#include <iostream>
#include <string>

/* ** Headers ** */
#include "employee.h"

/** * Definition ** */
employee::employee()
{
    eID = -1;
    eCompensation = 0.0;
}

void employee::setData(int ID, float compensation)
{
    eID = ID;
    eCompensation = compensation;
}

void employee::displayData()
{
    printf("ID: %d\nCompensation: %f\n", eID, eCompensation);
}

/* ** main ** */
int main()
{
    employee e1, e2, e3;

    for(int i; i < 3; i++)
    {
        int id;
        float compensation;

        printf("Enter employee ID and compensation for employee#%i\n", i+1);
        std::cin >> id >> compensation;

        switch(i)
        {
            case 0:
                    e1.setData(id, compensation);
                    break;
            case 1:
                    e2.setData(id, compensation);
                    break;
            case 2: 
                    e3.setData(id, compensation);
        }
    }
    {
        std::string input;
        do
        {
            printf("enter display to display the data\n");
            std::cin >> input;
        }
        while(input != "display");
    }    
    int input;
    do
    {
        printf("enter no of employee of which you want to display the data\n");
        std::cin >> input;
    }
    while(!(input >= 1 && input <= 3));
    switch(input)
    {
        case 1:
                e1.displayData();
                break;
        case 2:
                e2.displayData();
                break;
        case 3: 
                e3.displayData();
    }
    return 0;   
}