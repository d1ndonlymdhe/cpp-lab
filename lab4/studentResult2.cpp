#include <iostream>
#include <string.h>
using namespace std;

class Student
{
protected:
  int roll_no;
  char name[30];

public:
  Student(int roll_no, char *name)
  {
    this->roll_no = roll_no;
    strcpy(this->name, name);
  }

protected:
  void disp()
  {
    cout << "Name = " << name << " Roll no = " << roll_no << endl;
  }
};

class Marks
{
protected:
  int oop, pm, bc, acc, fin;

public:
  Marks(int oop, int bc, int acc, int fin)
  {
    this->oop = oop;
    this->bc = bc;
    this->acc = acc;
    this->fin = fin;
  }

protected:
  void disp()
  {
    cout << "oop = " << oop << " bc = " << bc << " acc = " << acc << " fin = " << fin << endl;
  }
};

class Result : public Marks, public Student
{
protected:
  int total;
  float percentage;

public:
  Result(int roll_no, char *name, int oop, int bc, int acc, int fin) : Marks(oop, bc, acc, fin), Student(roll_no, name)
  {
    total = oop + bc + acc + fin;
    percentage = total / 4;
  }
  void disp()
  {
    Student::disp();
    Marks::disp();
    cout << "Total = " << total << " Percentage = " << percentage << "%" << endl;
  }
};

int main()
{
  char name[] = "Ayush";
  Result R(10, name, 50, 50, 50, 50);
  R.disp();
  return 0;
}
