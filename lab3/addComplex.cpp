#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int A, int B)
    {
        a = A;
        b = B;
    }
    void disp()
    {
        cout << a << " + " << b << "i" << endl;
    }
    void add(Complex &c)
    {
        a = a + c.a;
        b = b + c.b;
    }
};

int main()
{
    Complex C1(5, 4);
    Complex C2(9, 3);
    C2.add(C1);
    C2.disp();
    return 0;
}