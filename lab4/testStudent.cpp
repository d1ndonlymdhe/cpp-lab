#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll()
    {
        cout << "Enter the student roll number" << endl;
        cin >> roll;
    }
};
class Test : public Student
{
    int sub1, sub2;

public:
    void setMarks()
    {
        cout << "Enter marks in sub1 and sub2" << endl;
        cin >> sub1 >> sub2;
    }
    void display()
    {
        cout << "Roll = "
             << "Sub 1 = " << sub1 << "Sub 2 = " << sub2 << endl;
    }
};
int main()
{
    Test t;
    t.setRoll();
    t.setMarks();
    t.display();
}