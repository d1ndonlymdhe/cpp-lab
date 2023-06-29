#include <iostream>
using namespace std;

class Demo
{
    int a, b;

public:
    Demo(int A, int B)
    {
        a = A;
        b = B;
    }
    int sum()
    {
        cout << "Sum = " << a + b;
        return a + b;
    }
    Demo(Demo &D)
    {
        a = D.a;
        b = D.b;
    }
};

int main()
{
    Demo d1(1, 2);
    Demo d2(d1);
    d2.sum();
    return 0;
}