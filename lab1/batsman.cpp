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
        cout << "Runs = " << runs << " fours = " << fours << " sixes = " << sixes;
    }
};

int main()
{
    Batsman b;
    b.setData();
    b.display();
    return 0;
}