#include <iostream>
#include <string.h>
using namespace std;

class Staff
{
protected:
    char name[30], address[30], post[30];

public:
    Staff(char n[], char addr[], char pst[])
    {
        strcpy(name, n);
        strcpy(address, addr);
        strcpy(post, pst);
    }
    Staff(char n[], char addr[])
    {
        strcpy(name, n);
        strcpy(address, addr);
    }
    void disp()
    {
        cout << "Name = " << name << " Address = " << address << " Post = " << post << endl;
    }
};
class Teaching : public virtual Staff
{
    char dept[30];

public:
    Teaching(char n[], char addr[], char dept[]) : Staff(n, addr)
    {
        strcpy(this->dept, dept);
    }
    void disp()
    {
        cout << "Name = " << name << " Address = " << address << " Dept = " << dept << endl;
    }
};
class NonTeaching : public virtual Staff
{
public:
    NonTeaching(char n[], char addr[], char dept[]) : Staff(n, addr, dept){};
};

class Admin : public NonTeaching, public Teaching
{
    int hrs;

public:
    Admin(char n[], char addr[], char post[], int Whrs) : Teaching(n, addr, post), NonTeaching(n, addr, post), Staff(n, addr, post)
    {
        hrs = Whrs;
    }
    void disp()
    {
        Staff::disp();
        cout << "Working hours = " << hrs << endl;
    }
};

int main()
{
    char a[30], b[30], c[30];
    int d;
    cout << "Enter staff name address and post" << endl;
    cin >> a >> b >> c;
    Staff S(a, b, c);
    cout << "Enter Teaching name address and dept" << endl;
    cin >> a >> b >> c;
    Teaching T(a, b, c);
    cout << "Enter Non Teaching name address and post" << endl;
    cin >> a >> b >> c;
    NonTeaching N(a, b, c);
    cout << "Enter admin name address post and working hours" << endl;
    cin >> a >> b >> c >> d;
    Admin A(a, b, c, d);
    S.disp();
    T.disp();
    N.disp();
    A.disp();
}