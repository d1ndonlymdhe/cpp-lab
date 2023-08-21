#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int eid, salary;
    char name[30];

public:
    Employee()
    {
    }
    Employee(char name[], int eid, int salary)
    {
        strcpy(this->name, name);
        this->eid = eid;
        this->salary = salary;
    }
    void disp()
    {
        cout << "Name = " << name << " Eid = " << eid << " Salary  = " << salary << endl;
    }
};

class Company
{
    char name[30], location[30];
    Employee E;

public:
    Company(char name[], char location[], Employee &E)
    {
        strcpy(this->name, name);
        strcpy(this->location, location);
        this->E = E;
    }
    void disp()
    {
        cout << "Company name = " << name << " Company location = " << location << endl;
        E.disp();
    }
};

int main()
{
    char name[30], location[30];
    char Ename[30];
    int eid, salary;
    cout << "Enter company name and location " << endl;
    cin >> name >> location;
    cout << "Enter employee name , eid  and salary " << endl;
    cin >> Ename >> eid >> salary;
    Employee E(Ename, eid, salary);
    Company C(name, location, E);
    C.disp();
    return 0;
}