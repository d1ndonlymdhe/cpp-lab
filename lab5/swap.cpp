#include <iostream>
using namespace std;
template <typename T>
void Swap(T &a, T &b)
{
    T t = a;
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