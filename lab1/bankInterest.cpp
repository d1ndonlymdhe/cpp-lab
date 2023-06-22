#include <iostream>
using namespace std;

class Deposit
{
    int principal;
    int time;
    int rate;
    float SI;

public:
    float interest(int p, int t, int r = 10)
    {
        principal = p;
        time = t;
        rate = r;
        SI = p * t * r / 100;
        return SI;
    }
    void display()
    {
        cout << "principal time rate SI" << endl;
        cout << principal << " " << time << " " << rate << " " << SI << endl;
    }
};

int main()
{
    Deposit Bank1;
    Deposit NRB;
    int p, t, r;
    cout << "Enter p t r for bank1" << endl;
    cin >> p >> t >> r;
    Bank1.interest(p, t, r);
    cout << "Enter p t for NRB" << endl;
    cin >> p >> t;
    NRB.interest(p, t);
    Bank1.display();
    NRB.display();
    return 0;
}