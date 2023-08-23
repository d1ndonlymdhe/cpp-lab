#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char *str = (char *)(calloc(1, sizeof(char)));
    int len;

public:
    String()
    {
    }
    String(char *str, int len)
    {

        strcpy(this->str, str);
        this->len = len;
    }
    String operator*(int n)
    {
        char *tempStr = (char *)calloc(len, n);
        // cout << sizeof(str);
        this->len = sizeof(str) * n;
        for (int i = 0; i < n; i++)
        {
            strcat(tempStr, str);
        }
        // this->str = (char *)calloc(sizeof(str), n);
        strcpy(this->str, tempStr);

        return *this;
    }
    void disp()
    {
        cout << str;
    }
};

int main()
{
    char hello[10];
    cin >> hello;
    String abcd(hello, strlen(hello));
    String x = abcd * 5;
    x.disp();
    return 0;
}