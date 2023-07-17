#include <iostream>
using namespace std;
class Shape
{
protected:
    int *sides;
    float area;
    int size;

public:
    Shape()
    {
        sides = (int *)(calloc(3, sizeof int(0)));
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int arr[])
    {
        size = 2;
        sides[0] = arr[0];
        sides[1] = arr[1];
    }
    float getArea()
    {
        return sides[0] * sides[1];
    }
};

class Triangle : public Shape
{
public:
    Triangle(int arr[])
    {
        size = 3;
        sides[0] = arr[0];
        sides[1] = arr[1];
        sides[2] = arr[2];
    }
    float getArea()
    {
        return sides[0] * sides[1] * sides[2];
    }
};

int main()
{
    int rArr[2] = {1, 2};
    Rectangle r(rArr);
    int tArr[3] = {1, 2, 3};
    Triangle t(tArr);
    cout << "rectangle  = " << r.getArea() << endl;
    cout << "triangle  = " << t.getArea() << endl;
    return 0;
}