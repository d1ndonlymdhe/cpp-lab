#include <iostream>
using namespace std;
class Person
{
    static int count;
    int id, age;
    char name[30], address[30];

public:
    void init()
    {
        cout << "Enter name, address and age" << endl;
        cin >> name >> address >> age;
        if (age > 18)
        {
            count++;
            id = 1000 + count;
        }
        else
        {
            id = 0;
        }
    }
    void display()
    {
        cout << "Name = " << name << " Age = " << age << " id = " << id << " address = " << address << endl;
    }
};

int Person::count = 0;

int main()
{
    Person people[5];
    for (int i = 0; i < 5; i++)
    {
        people[i].init();
    }
    for (int i = 0; i < 5; i++)
    {
        people[i].display();
    }
}