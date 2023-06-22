#include <iostream>
using namespace std;

class Reverse
{
    int num;

public:
    int preZero = 0;
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
    int flag = 1;
    while (t > 0)
    {
        r = r * 10 + (t % 10);
        if (t % 10 == 0 && flag == 1)
        {
            preZero++;
        }
        else
        {
            flag = 0;
        }
        t = t / 10;
    }
    return r;
}

int main()
{
    Reverse r;
    r.getValue();
    int ans = r.reverse();
    cout << "reverse = ";
    for (int i = 0; i < r.preZero; i++)
    {
        cout << "0";
    }
    cout << ans;
    return 0;
}