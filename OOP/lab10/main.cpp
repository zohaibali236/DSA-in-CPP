#include <iostream>
#include <string>
using namespace std;

class person
{
    public:
        int age;
        char gender;

        void setGender(char g)
        {
            gender = g;
        }
};

class employee: public person
{
    public:
    string name;
    
    protected:
    int empID;
    double salary;
     
    public:
    void setData(string name, int id, double salary, int age, char gender)
    {
        this->name = name;
        empID = id;
        this->salary = salary;
        person::age = age;
        person::setGender(gender);
    }
    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << empID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Age: " << person::age << endl;
        cout << "Gender: " << person::gender << endl;
    }
};

class faculty: public employee
{
    public:
    string department;
    string qualification;

    void setData(string name, int id, double salary, int age, char gender, string department, string qualification)
    {
        employee::setData(name, id, salary, age, gender);
        this->department = department;
        this->qualification = qualification;
    }
};

class lecturer: public faculty
{
    public:
    string specialization;
    int experience;

    void setData(string name, int id, double salary, int age, char gender, string department, string qualification, string specialization, int experience)
    {
        faculty::setData(name, id, salary, age, gender, department, qualification);
        this->specialization = specialization;
        this->experience = experience;
    }

    void printData()
    {
        employee::printData();
        cout << "Department: " << faculty::department << endl;
        cout << "Qualification: " << faculty::qualification << endl;
        cout << "Specialization: " << this->specialization << endl;
        cout << "Experience: " << this->experience << endl;
    }
};

int main()
{
    lecturer L;

    L.setData("Test User", 1, 15000.45, 25, 'M', "Software Engineering", "Masters in Software Engineer", "Machine Learning", 5);

    L.printData();

    return 0;
}