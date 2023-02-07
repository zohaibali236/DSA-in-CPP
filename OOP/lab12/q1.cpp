#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string name;
        int age;

    public:
        Person(): name(""), age(0) {}

        Person(string _name, int _age): name(_name), age(_age) {}

        virtual void showData()
        {
            cerr << "Name: " << name << endl;
            cerr << "Age: " << age << endl;
        }

        virtual void getData()
        {
            cerr << "Enter name" << endl;
            cin.ignore();
            getline(cin, name);

            cerr << "Enter age" << endl;
            cin >> age;
        }
        ~Person() {}
        
};

class Student: public Person
{
    private:
        float gpa;
        string department;

    public:
        Student(): Person(), gpa(), department("") {}

        Student(string _name, int _age, float _gpa, string _dept): Person(_name, _age), gpa(_gpa), department(_dept) {}

        void showData()
        {
            Person::showData();

            cerr << "GPA: " << gpa << endl;
            cerr << "Department: " << department << endl;
        }

        virtual void getData()
        {
            Person::getData();

            cerr << "Enter GPA and Dept" << endl;
            cin >> gpa;

            cin.ignore();
            getline(cin, department);
        }

        ~Student()
        {
            cout << "Student destroyed ";
        }
};

class Professor: public Person
{
    private:
        float salary;
        string department;
    
    public:
        void showData()
        {
            Person::showData();

            cerr << "Salary: $" << salary << endl;
            cerr << "Department: " << department << endl;
        }

        virtual void getData()
        {
            Person::getData();
            cerr << "Enter Salary and Dept" << endl;
            cin >> salary;

            cin.ignore();
            getline(cin, department);
        }

};

int main()
{
    Person *ptr;

    int choice;

    do
    {
        cerr << "Enter 1 for student or 2 for professor" << endl;
        cin >> choice;
    }
    while(choice != 1 && choice != 2);

    if(choice == 1)
    {
        ptr = new Student;

        ptr->getData();
        cerr << endl;
        ptr->showData();
    }
    else if(choice == 2)
    {
        ptr = new Professor;

        ptr->getData();
        cerr << endl;
        ptr->showData();
    }

    delete(ptr);

    return 0;
}