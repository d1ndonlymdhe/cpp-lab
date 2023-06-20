#include <iostream>
using namespace std;

class Box
{
    int length, breadth, height;

public:
    void readData()
    {
        cout << "Enter length breadth and height ";
        cin >> length >> breadth >> height;
    }
    int showVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box b;
    b.readData();
    cout << "Volume = " << b.showVolume();
    return 0;
}