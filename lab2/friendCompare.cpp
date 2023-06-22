#include <iostream>
using namespace std;
class Compare
{
    int n1, n2;

public:
    void getValue(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    friend int compare(Compare C);
};

int compare(Compare C)
{
    if (C.n1 > C.n2)
    {
        return C.n1;
    }
    else
    {
        return C.n2;
    }
}

int main()
{
    Compare C;
    int a, b;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    C.getValue(a, b);
    cout << compare(C) << " is greatest";
    return 0;
}