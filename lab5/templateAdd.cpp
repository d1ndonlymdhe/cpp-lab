#include <iostream>
using namespace std;

template <class T>
class Sum
{
    T a, b;

public:
    Sum()
    {
        cin >> a >> b;
    }
    void add()
    {
        cout << (a + b) << endl;
    }
};

int main()
{
    cout << "Enter two floats" << endl;
    Sum<float> f;
    cout << "Enter two ints" << endl;
    Sum<int> i;
    f.add();
    i.add();
    return 0;
}