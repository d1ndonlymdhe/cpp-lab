#include <iostream>
#include <math.h>
using namespace std;
class Polar
{
    double r, th;

public:
    Polar(double radius, double angle)
    {
        r = radius;
        th = angle;
    }
    friend class Rect;
};
class Rect
{
    double a, b;

public:
    void operator=(Polar &P)
    {
        a = sin(P.th) * P.r;
        b = cos(P.th) * P.r;
    }
    void disp()
    {
        cout << "(" << a << "," << b << ")" << endl;
    }
};

int main()
{
    Polar P(1, M_PI);
    Rect R;
    R = P;
    R.disp();

    return 0;
}