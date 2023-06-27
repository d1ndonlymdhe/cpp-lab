#include <iostream>
using namespace std;

class Highway;
class Prithivi;
class Mahendra;

class Highway
{
protected:
    int km, mtr;

public:
    void init(int k, int m)
    {
        km = k;
        mtr = m;
    }
    friend inline int sum(Mahendra M, Prithivi P);
};

class Prithivi : public Highway
{
};
class Mahendra : public Highway
{
};

inline int sum(Mahendra M, Prithivi P)
{
    return M.km * 1000 + M.mtr + P.km * 1000 + P.mtr;
}

int main()
{
    Prithivi P;
    Mahendra M;
    int km, mtr;
    cout << "Enter km and mtr for Prithivi" << endl;
    cin >> km >> mtr;
    P.init(km, mtr);
    cout << "Enter km and mtr for Mahendra" << endl;
    cin >> km >> mtr;
    M.init(km, mtr);
    cout << "Total length in meter " << sum(M, P);
    return 0;
}
