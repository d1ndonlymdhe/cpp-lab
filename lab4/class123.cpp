#include <iostream>
using namespace std;

class Class1
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter value for a" << endl;
        cin >> a;
    }
};
class Class2
{
protected:
    int b;

public:
    void setB()
    {
        cout << "Enter value for b" << endl;
        cin >> b;
    }
};

class Class3 : public Class2, public Class1
{
public:
    void sum()
    {
        cout << "Sum = " << a + b;
    }
};

int main()
{
    Class3 obj;
    obj.setA();
    obj.setB();
    obj.sum();
    return 0;
}