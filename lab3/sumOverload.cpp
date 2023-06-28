#include <iostream>
using namespace std;

class Sum
{
    int a, b, c = 0;

public:
    Sum(int A, int B)
    {
        a = A;
        b = B;
    }
    Sum(int A, int B, int C)
    {
        a = A;
        b = B;
        c = C;
    }
    void res()
    {
        cout << "Sum = " << a + b + c << endl;
    }
};
int main()
{
    Sum s1(1, 2);
    Sum s2(1, 2, 3);
    s1.res();
    s2.res();
    return 0;
}