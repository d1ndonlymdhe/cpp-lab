#include <iostream>
using namespace std;

class Rectangle
{
    int l, b;

public:
    void getData()
    {
        cout << "Enter length and breadth ";
        cin >> l >> b;
    }
    void calculateArea()
    {
        cout << "Area = " << l * b;
    }
};

int main()
{
    Rectangle rect;
    rect.getData();
    rect.calculateArea();
    return 0;
}