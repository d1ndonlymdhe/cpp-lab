#include <iostream>
using namespace std;
class Distance
{
    int km;

public:
    Distance(int k)
    {
        km = k;
    }

    void operator++()
    {
        km++;
    }
    void getDistance()
    {
        cout << "Distance = " << km << endl;
    }
    friend void operator--(Distance D);
};

void operator--(Distance D)
{
    D.km--;
}

int main()
{
    Distance abcd(10);
    ++abcd;
    abcd.getDistance();
    --abcd;
    abcd.getDistance();
}