#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int getFare(int distance)
    {
        return distance * 50;
    }
};

class Car : public Vehicle
{
public:
    int getFare(int distance)
    {
        return distance * 200;
    }
};

class Bus : public Vehicle
{
public:
    int getFare(int distance)
    {
        return distance * 20;
    }
};

int main()
{
    Vehicle *Vptr = new Vehicle;
    // Vehicle V;
    cout << "Default fare for 20 km = " << Vptr->getFare(20) << endl;
    Vptr = new Car;
    // virtual function override
    cout << "Car fare for 20 km = " << Vptr->getFare(20) << endl;
    Bus b;
    cout << "Bus fare for 20km = " << b.getFare(20);
    return 0;
}