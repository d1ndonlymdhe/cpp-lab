#include <iostream>
using namespace std;

class Demo
{
    int num1, num2;

public:
    void swapData()
    {
        cout << "Enter two numbers ";
        cin >> num1 >> num2;
        int t = num1;
        num1 = num2;
        num2 = t;
        cout << "Swapped " << num1 << " " << num2;
    }
};

int main()
{
    Demo d;
    d.swapData();
    return 0;
}