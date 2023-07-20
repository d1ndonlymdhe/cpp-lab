#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char *str = (char *)(calloc(1, sizeof(char)));

public:
    String()
    {
    }
    String(char *str)
    {
        strcpy(this->str, str);
    }
    char *operator*(int n)
    {
        char *tempStr = (char *)calloc(sizeof(str), n);
        for (int i = 0; i < n; i++)
        {
            strcat(tempStr, str);
        }
        this->str = (char *)calloc(sizeof(str), n);
        strcpy(this->str, tempStr);
        return tempStr;
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
    String abcd(hello);
    abcd * 5;
    abcd.disp();
    return 0;
}