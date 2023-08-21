#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual int getFare(int distance) = 0;
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
    Vehicle *Vptr;
    Vptr = new Car;
    // virtual function override
    cout << "Car fare for 20 km = " << Vptr->getFare(20) << endl;
    Vptr = new Bus;
    cout << "Bus fare for 20km = " << Vptr->getFare(20) << endl;
    return 0;
}