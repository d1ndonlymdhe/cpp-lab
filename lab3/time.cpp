#include <iostream>
using namespace std;
class Time
{
    int hh;
    int mm;
    int ss;

public:
    Time()
    {
        hh = 0;
        mm = 0;
        ss = 0;
    }
    Time(int h, int m, int s)
    {
        hh = h;
        mm = m;
        ss = s;
    }
    void add(Time &t1, Time &t2)
    {
        int H = t1.hh + t2.hh;
        int M = t1.mm + t2.mm;
        int S = t1.ss + t2.ss;
        if (S % 60 != 0)
        {
            M += 1;
            S = S % 60;
        }
        if (M % 60 != 0)
        {
            H += 1;
            M = M % 60;
        }
        hh = H;
        mm = M;
        ss = S;
    }
    void display()
    {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};
int main()
{
    Time t1(1, 40, 20);
    Time t2(2, 21, 45);
    Time t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}