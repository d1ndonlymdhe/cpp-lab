#include <iostream>
using namespace std;
template <class A>
void Swap(A &a, A &b)
{
    A t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 5;
    int b = 6;
    Swap(a, b);
    cout << a << " " << b << endl;
    char c = 't';
    char d = 'w';
    Swap(c, d);
    cout << c << " " << d << endl;
    return 0;
}