#include <iostream>
using namespace std;

class Class1
{
protected:
    int a;

public:
    void setA()
    {
        cout << "Enter value for class1 A" << endl;
        cin >> a;
    }
};
class Class2
{
protected:
    int a;

public:
    void setB()
    {
        cout << "Enter value for class2 A" << endl;
        cin >> a;
    }
};

class Class3 : public Class2, public Class1
{
public:
    void sum()
    {
        cout << "Sum = " << Class2::a + Class1::a;
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