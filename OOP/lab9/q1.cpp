#include <iostream>
#include <string>

class Student
{
    protected:
        int usn, age;
        std::string name;

};

class Ug: public Student
{
    int 
        sem,
        fee,
        sti
    ;

    public:
        void getData()
        {
            std::cout << "Enter University Serial Number" << std::endl;
            std::cin >> usn;

            std::cout << "Enter name" << std::endl;
            std::cin >> name;

            std::cout << "Enter age" << std::endl;
            std::cin >> age;

            std::cout << "Enter Semester No" << std::endl;
            std::cin >> sem;

            std::cout << "Enter semester fee" << std::endl;
            std::cin >> fee;

            std::cout << "Enter student id" << std::endl;
            std::cin >> sti;
       
        }
        void display()
        {
            std::cout << "USN" << "\t" << "ST_ID" << "\t" << "NAME\t" << "AGE" << "\t" << "SEM.NO" << "\t" << "FEE" << "\n";
            std::cout << usn << "\t" << sti << "\t" << name << "\t" << age << "\t" << sem << "\t" << fee << std::endl; 
        }
        
        int getsem()
        {
            return sem;
        }
        int getage()
        {
            return age;
        }
};

class Pg: public Student
{
        int 
        sem,
        fee,
        sti
    ;

    public:
        void getData()
        {
            std::cout << "Enter University Serial Number" << std::endl;
            std::cin >> usn;

            std::cout << "Enter name" << std::endl;
            std::cin >> name;

            std::cout << "Enter age" << std::endl;
            std::cin >> age;

            std::cout << "Enter Semester No" << std::endl;
            std::cin >> sem;

            std::cout << "Enter semester fee" << std::endl;
            std::cin >> fee;

            std::cout << "Enter student id" << std::endl;
            std::cin >> sti;
        }
        void display()
        {
            std::cout << "USN" << "\t" << "ST_ID" << "\t" << "NAME\t" << "AGE" << "\t" << "SEM.NO" << "\t" << "FEE" << "\n";
            std::cout << usn << "\t" << sti << "\t" << name << "\t" << age << "\t" << sem << "\t" << fee << std::endl; 
        }
        
        int getsem()
        {
            return sem;
        }
        int getage()
        {
            return age;
        }
};

int main()
{
    Pg p[2];
    Ug u[2];

    for(int i = 0; i < sizeof(p)/sizeof(Pg); i++)
    {
        std::cout << "Enter the details for student#" << i+1 << " Of Post-Graduate\n";
        p[i].getData(); 
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof(u)/sizeof(Ug); i++)
    {
        std::cout << "Enter the details for student#" << i+1 << " Of Under-Graduate\n";
        u[i].getData(); 
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof(p)/sizeof(Pg); i++)
    {
        std::cout << "details for student#" << i+1 << " Of Post-Graduate are\n";
        p[i].display(); 
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < sizeof(u)/sizeof(Ug); i++)
    {
        std::cout << "details for student#" << i+1 << " Of Under-Graduate are\n";
        u[i].display(); 
    }

    return 0;
}