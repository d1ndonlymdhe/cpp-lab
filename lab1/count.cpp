#include <iostream>
using namespace std;

class Demo
{
    int num1, num2;
    static int count;

public:
    void getData()
    {
        cout << "Enter 2 numbers \n";
        cin >> num1 >> num2;
        cout << "sum = " << num1 + num2 << endl;
        count++;
    }
    void getCount()
    {
        cout << " \ncount = " << count;
    }
};

int Demo::count = 0;

int main()
{
    Demo d1;
    // cout << "Enter how many" << endl;

    while (1)
    {
        char ch;
        d1.getData();
        cout << "Stop?";
        cin >> ch;
        if (ch == 'y')
        {
            break;
        }
    }
    // d1.getData();
    // d1.getData();
    d1.getCount();
    return 0;
}