#include <iostream>
using namespace std;

class Rectangle
{
    int l, b;

public:
    void getData();
    void calculateArea();
};

void Rectangle::getData()
{
    cout << "Enter length and breadth ";
    cin >> l >> b;
}

void Rectangle::calculateArea()
{
    cout << "Area = " << l * b;
}

int main()
{
    Rectangle rect;
    rect.getData();
    rect.calculateArea();
    return 0;
}