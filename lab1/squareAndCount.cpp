#include <iostream>
using namespace std;

class Demo
{
    int num;
    static int count;

public:
    void getData()
    {
        cout << "Enter a number ";
        cin >> num;
        cout << "Squared = " << num * num << endl;
        count++;
    }
    static void showCount()
    {
        cout << "Count = " << count;
    }
};

int Demo::count = 0;

int main()
{
    Demo d;
    Demo d2;
    
    d.getData();
    d.getData();
    d2.getData();
    d2.getData();
    Demo::showCount();
}