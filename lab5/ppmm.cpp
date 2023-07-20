#include <iostream>
using namespace std;

// class Abdd
// {
// };

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
    friend void operator--(Distance &D);
};

void operator--(Distance &D)
{
    D.km--;
}

int main()
{
    // Abdd A;
    // ++A;
    Distance D(10);
    ++D;
    D.getDistance();
    --D;
    D.getDistance();
}