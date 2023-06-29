#include <iostream>
#include <string.h>
using namespace std;

class Mountain
{
    char name[30], location[30];
    int height;

public:
    Mountain(char N[], char L[], int h)
    {
        strcpy(name, N);
        strcpy(location, L);
        height = h;
    }
    void disp()
    {
        cout << "Name = " << name << " location = " << location << " height = " << height;
    }
    void cmpHeight(Mountain &M)
    {
        cout << "Taller mountain :" << endl;
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
    k2.cmpHeight(E);

    return 0;
}
