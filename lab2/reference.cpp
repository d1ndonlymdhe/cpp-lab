#include <iostream>
using namespace std;

void sumAndDiff(int a, int b, int &s, int &d)
{
    s = a + b;
    d = a - b;
}

int main()
{
    int a = 10, b = 5;
    int s, d;
    sumAndDiff(a, b, s, d);
    cout << s << " " << d;
    return 0;
}