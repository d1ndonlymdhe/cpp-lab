#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Complex operator+(Complex &C)
    {
        return Complex(C.a + a, C.b + b);
    }
    void disp()
    {
        cout << a << " + i" << b << endl;
    }
    friend Complex operator-(Complex &C1, Complex &C2);
};

Complex operator-(Complex &C1, Complex &C2)
{
    return Complex(C1.a - C2.a, C1.b - C2.b);
}

int main()
{
    Complex A(1, 2);
    Complex B(3, 4);
    A = A - B;
    B = A + B;
    A.disp();
    B.disp();
    return 0;
}