

// do not copy copy employeeSingle.cpp

#include <iostream>
#include <string.h>
using namespace std;

class Company;

class Employee
{
public:
    int eid, salary;
    char name[30];

public:
    Employee(int eid, int salary, char name[])
    {
        this->eid = eid;
        this->salary = salary;
        strcpy(this->name, name);
    }
    void showInfo()
    {
        cout << "Name = " << name << " eid = " << eid << " salary = " << salary << endl;
    }
    friend class Company;
};

class Company
{
    char name[30], location[30];
    Employee *employees;
    int employeeNum;

public:
    Company(char name[], char location[], int employeeNum, Employee *employees)
    {
        strcpy(this->name, name);
        strcpy(this->location, location);
        employees = (Employee *)(calloc(employeeNum, sizeof(Employee)));
        this->employees = employees;
        // for (int i = 0; i < employeeNum; i++)
        // {
        //     Employee *E = (&employees)[i];
        //     // this->employees[i] = E;
        //     // this->employees[i] = (employees[i]);
        // }

        // memcpy(this->employees, employees, employeeNum * sizeof(Employee));
        this->employeeNum = employeeNum;
        // this->employees = employees;
    }
    void disp()
    {
        cout << "Company name = " << name << " Location = " << location << endl;
        cout << "-----Employee Info-----" << endl;
        for (int i = 0; i < employeeNum; i++)
        {

            Employee employee = employees[i];
            employee.showInfo();
            // cout << "Name = " << employee.name << " eid = " << employee.eid << " salary = " << employee.salary << endl;
        }
    }
};

int main()
{
    char name[30];
    char location[30];
    int empNum;
    cout << "Enter company name " << endl;
    cin >> name;
    cout << "Enter company location " << endl;
    cin >> location;
    cout << "How many employees " << endl;
    cin >> empNum;
    Employee *emps = (Employee *)(calloc(empNum, sizeof(Employee)));
    for (int i = 0; i < empNum; i++)
    {
        char name[30];
        int id, salary;
        cout << "Enter employee id, name , salary" << endl;
        cin >> id >> name >> salary;
        // Employee *tempPts = emps + i;
        emps[i] = Employee(id, salary, name);
        // cout << tempPts->eid << " " << tempPts->name << " " << tempPts->salary << endl;
    }
    // for (int i = 0; i < empNum; i++)
    // {
    //     Employee E = emps[i];
    //     cout << "Name = " << E.name << " eid = " << E.eid << " salary = " << E.salary << endl;
    // }
    Company C(name, location, empNum, emps);
    C.disp();
    // Employee* emps;
}