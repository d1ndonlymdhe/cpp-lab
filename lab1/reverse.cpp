#include <iostream>
using namespace std;

class Reverse
{
    int num;

public:
    void getValue()
    {
        cout << "Enter a number ";
        cin >> num;
    }
    int reverse();
};

int Reverse::reverse()
{
    int t = num;
    int r = 0;
    while (t > 0)
    {
        r = r * 10 + (t % 10);
        t = t / 10;
    }
    return r;
}

int main()
{
    Reverse r;
    r.getValue();
    cout << "reverse = " << r.reverse();
    return 0;
}