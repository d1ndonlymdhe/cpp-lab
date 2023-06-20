#include <iostream>
using namespace std;

class employee
{
    char name[30], address[30], phone[10];
    int salary, netSalary, tax;

public:
    void input()
    {
        cout << "Enter name address phone salary tax \n";
        cin >> name >> address >> phone >> salary >> tax;
        netSalary = salary - tax;
    }
    void output()
    {
        cout << "name address phone salary tax net \n";
        cout << name << " " << address << " " << phone << " " << salary << " " << tax << " " << netSalary;
    }
};

int main()
{
    employee e;
    e.input();
    e.output();
    return 0;
}