#include <iostream>
using namespace std;

class Imperial
{
    int Feet;
    int Inches;

public:
    Imperial(int f, int i)
    {
        Feet = f;
        Inches = i;
    }
    friend class Metric;
};

class Metric
{
    int Meter;
    int Centimeters;

public:
    Metric(Imperial &I)
    {
        float f = I.Feet + (I.Inches / float(12));
        float M = (f / 3.28084);
        Meter = (int)(M);
        Centimeters = (int)(M * 100) % 100;
    }

    void disp()
    {
        cout << Meter << " meters and " << Centimeters << " centimeters" << endl;
    }
};

int main()
{
    Imperial I(6, 3);
    Metric m = I;

    // int x = 1;
    m.disp();
    return 0;
}