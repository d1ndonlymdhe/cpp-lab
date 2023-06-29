#include <iostream>
#include <string.h>
using namespace std;
class Student
{

public:
	char name[30];
	Student()
	{
		//			char temp[30] = "Unknown";
		//			name = temp;
		strcpy(name, "Unknown");
	}
	Student(char name[])
	{
		strcpy(this->name, name);
		//			this.name << name;
	}
};

int main()
{
	Student S;
	Student S2("Ayush");
	cout << S.name << endl;
	cout << S2.name;
	return 0;
}
