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

    void operator++(int Dummy)
    {
        km++;
    }
    void getDistance()
    {
        cout << "Distance = " << km << endl;
    }
    friend void operator--(Distance D, int Dummy);
};

void operator--(Distance D, int Dummy)
{
    D.km--;
}

int main()
{
    Distance abcd(10);
    abcd++;
    abcd.getDistance();
    abcd--;
    abcd.getDistance();
}