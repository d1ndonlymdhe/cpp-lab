#include <iostream>
using namespace std;

class Account
{
    char name[30];
    int acNum;
    char type[10];
    int amount;

public:
    void init()
    {
        cout << "Enter name type acNum amount" << endl;
        cin >> name >> type >> acNum >> amount;
    }
    void withdraw(int amt)
    {
        if (amt < amount)
        {
            amount = amount - amt;
        }
    }
    void deposit(int amt)
    {
        amount = amount + amt;
    }
    void display()
    {
        cout << "NUM name      type     amount" << endl;
        cout << acNum << " " << name << "    " << type << "    " << amount << endl;
    }
};

int main()
{
    Account Ac;
    Ac.init();
    Ac.deposit(5000);
    Ac.withdraw(2000);
    Ac.display();
    return 0;
}