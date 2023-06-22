#include <iostream>
using namespace std;

class PU;
class TU;

class TU
{
    friend class PU;
    int researchers;

public:
    TU(int r)
    {
        researchers = r;
    }
    void showDifference(PU p);
};

class PU
{
    friend class TU;
    int phds;

public:
    PU(int p)
    {
        phds = p;
    }
    void showTotal(TU t);
};

void TU::showDifference(PU p)
{
    cout << "Diff = " << researchers - p.phds << endl;
}
void PU::showTotal(TU t)
{
    cout << "Total = " << phds + t.researchers << endl;
}

int main()
{
    int phds, researchers;
    cout << "Enter number in PU ";
    cin >> phds;
    cout << "Enter numbers in TU";
    cin >> researchers;
    TU t(researchers);
    PU p(phds);
    t.showDifference(p);
    p.showTotal(t);
    return 0;
}