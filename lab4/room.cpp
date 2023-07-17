#include <iostream>
using namespace std;

class Room
{
protected:
    int length, breadth;

public:
    int area()
    {
        return length * breadth;
    }
};

class BedRoom : public Room
{
    int height;

public:
    void setData(int l, int b, int h)
    {
        length = l;
        height = h;
        breadth = b;
    }
    int volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    BedRoom B;
    int l, b, h;
    cout << "Enter length breadth and height";
    cin >> l >> b >> h;
    B.setData(l, b, h);
    cout << "Area = " << B.area() << " Volume = " << B.volume() << endl;
    return 0;
}