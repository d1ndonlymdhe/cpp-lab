#include <iostream>
using namespace std;

class Demo
{
public:
    void swapData(int num1, int num2)
    {
        int t = num1;
        num1 = num2;
        num2 = t;
        cout << "Swapped " << num1 << " " << num2;
    }
};

int main()
{
    Demo d;
    int num1, num2;
    cout << "Enter two numbers ";
    cin >> num1 >> num2;
    d.swapData(num1, num2);
    return 0;
}