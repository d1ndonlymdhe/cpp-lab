#include <iostream>
using namespace std;

void parseHMS(int &h, int &m, int &s)
{
    if (s % 60 > 0)
    {
        m += (s/60);
        s = s % 60;
    }
    if (m % 60 > 0)
    {
        h += (m/60);
        m = m % 60;
    }
    h = (h >= 24 ? h % 24 : h);
}

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
        parseHMS(h, m, s);
        hh = h;
        mm = m;
        ss = s;
    }
    void add(Time &t1, Time &t2)
    {
        int H = t1.hh + t2.hh;
        int M = t1.mm + t2.mm;
        int S = t1.ss + t2.ss;
        parseHMS(H, M, S);
        hh = H;
        mm = M;
        ss = S;
    }
    void display()
    {
        int arr[3] = {hh, mm, ss};
        for (int i = 0; i < 3; i++)
        {
            cout << (arr[i] < 10 ? "0" : "") << arr[i] << ((i < 2) ? ":" : "\n");
        }
    }
};

int main()
{
    Time t1(8, 40, 121);
    Time t2(15, 21, 45);
    Time t3;
    t3.add(t1, t2);
    t3.display();
    return 0;
}