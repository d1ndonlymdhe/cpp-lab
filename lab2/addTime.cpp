#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void init(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showTime();

    friend Time add(Time t, Time t2);
};

void Time::showTime()
{
    cout << hours << " " << minutes << " " << seconds;
}

Time add(Time t, Time t2)

{
    Time newTime;
    newTime.init(t.hours + t2.hours, t.minutes + t2.minutes, t.seconds + t2.seconds);
    return newTime;
}

int main()
{
    Time t1, t2;
    int h, m, s;
    cout << "Enter hour minutes seconds";
    cin >> h >> m >> s;
    t1.init(h, m, s);
    cout << "Enter hour minutes seconds";
    cin >> h >> m >> s;
    t2.init(h, m, s);
    Time tans = add(t1, t2);
    tans.showTime();
    return 0;
}