#include <iostream>
using namespace std;

class DM;
class DB;

class DM
{
    float distance;

public:
    void set()
    {
        cout << "Enter distance meter";
        cin >> distance;
    }
    friend float add(DM m, DB f);
};

class DB
{
    float distance;

public:
    void set()
    {
        cout << "Enter distance feet";
        cin >> distance;
    }
    friend float add(DM m, DB f);
};

float feetToMeter(float f)
{
    return f * 0.3048;
}

float add(DM m, DB f)
{
    return m.distance + feetToMeter(f.distance);
}

int main()
{
    DM meter;
    DB foot;
    meter.set();
    foot.set();
    cout << "Sum = " << add(meter, foot) << "meters";
    return 0;
}
