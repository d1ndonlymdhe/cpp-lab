#include <iostream>
using namespace std;
class Batsman
{
    int runs, fours, sixes;

public:
    void setData()
    {
        cout << "Enter runs fours and sixes ";
        cin >> runs >> fours >> sixes;
    }
    void display()
    {
        cout << "Runs = " << runs << " fours = " << fours << " sixes = " << sixes << endl;
    }
};

int main()
{
    Batsman b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i].setData();
    }
    for (int i = 0; i < 5; i++)
    {
        b[i].display();
    }
    return 0;
}