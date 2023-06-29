#include <iostream>
using namespace std;
class AddAmount
{
	int amount;

public:
	AddAmount()
	{
		amount = 50;
	}
	AddAmount(int amt)
	{
		amount = 50 + amt;
	}
	void display()
	{
		cout << "amount = " << amount << endl;
	}
};

int main()
{
	AddAmount A;
	AddAmount A2(100);
	A.display();
	A2.display();
	return 0;
}
