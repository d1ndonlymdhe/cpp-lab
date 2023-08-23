#include <iostream>
#include <string.h>
using namespace std;

class String
{
public:
    char *str = (char *)calloc(sizeof(char), 1);
    int len;
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
        len = len * n;
        char *tempStr = (char *)calloc(sizeof(char), len + 1);
        // cout << sizeof(str);
        for (int i = 0; i < n; i++)
        {
            strcat(tempStr, str);
        }
        str = (char *)calloc(sizeof(char), len + 1);
        strcpy(this->str, tempStr);
        return *this;
    }
    void disp()
    {
        cout << str << endl;
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