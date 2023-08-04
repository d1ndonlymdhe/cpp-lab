#include <iostream>
using namespace std;

void parseHMS(int &h, int &m, int &s)
{
	m += s / 60;	// round
	h += m / 60;	// overflown values
	s = s % 60;
	m = m % 60;
	h = h % 24;
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
		if (hh < 10) cout << '0'; cout << hh << ':';
		if (mm < 10) cout << '0'; cout << mm << ':';
		if (ss < 10) cout << '0'; cout << ss << endl;
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

