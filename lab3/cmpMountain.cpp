#include <iostream>
#include <string.h>
using namespace std;

class Mountain
{
    char name[30], location[30];
    int height;

public:
    Mountain(char N[30], char L[30], int h)
    {
        strcpy(name, N);
        strcpy(location, L);
        height = h;
    }
    void disp()
    {
        cout << "Name = " << name << " location = " << location << " height = " << height;
    }
    void cmp(Mountain &M)
    {
        if (M.height > height)
        {
            M.disp();
        }
        else
        {
            disp();
        }
    }
};
int main()
{
    Mountain E("Everest", "Nepal", 8848);
    Mountain k2("K2", "Pakistan", 8000);
    cout << "Taller mountain :" << endl;
    k2.cmp(E);

    return 0;
}
