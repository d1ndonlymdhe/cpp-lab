#include <iostream>
#include <math.h>
using namespace std;
class Rect;
class Polar
{
    float r, th;

public:
    Polar(float radius, float angle)
    {
        r = radius;
        th = angle;
    }
    friend class Rect;
};
class Rect
{
    float a, b;

public:
    Rect operator=(Polar &P)
    {
        a = cos(P.th) * P.r;
        b = sin(P.th) * P.r;
    }
    void disp()
    {
        cout << "(" << a << "," << b << ")" << endl;
    }
};

int main()
{
    Polar P(1, 3.14 / 2);
    Rect R;
    R = P;
    R.disp();
    return 0;
}