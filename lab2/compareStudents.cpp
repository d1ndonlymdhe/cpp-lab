#include <iostream>
using namespace std;
class GCES;
class PEC;
class School;

class School
{
protected:
    int number;

public:
    void getStudents(int n)
    {
        number = n;
    }
    friend char compare(PEC p, GCES g);
};

class GCES : public School
{
};
class PEC : public School
{
};

char compare(PEC p, GCES g)
{
    if (p.number > g.number)
    {
        return 'p';
    }
    else
    {
        return 'g';
    }
}
int main()
{
    GCES gces;
    PEC pec;
    int a, b;
    cout << "How many students in PEC ";
    cin >> a;
    cout << "How many students in GCES ";
    cin >> b;
    if (compare(pec, gces) == 'g')
    {
        cout << "GCES";
    }
    else
    {
        cout << "PEC";
    }
    cout << " has more students";
    return 0;
}