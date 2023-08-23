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

    Distance operator++(int Dummy)
    {
        km++;
        return *this;
    }
    void getDistance()
    {
        cout << "Distance = " << km << endl;
    }
    friend Distance operator--(Distance &D, int Dummy);
};

Distance operator--(Distance &D, int Dummy)
{
    D.km--;
    return D;
}

int main()
{
    Distance abcd(10);
    abcd++;
    abcd.getDistance();
    abcd--;
    abcd.getDistance();
}