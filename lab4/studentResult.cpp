#include <iostream>
using namespace std;

class Student
{
protected:
  int roll_no;

public:
  Student(int roll)
  {
    roll_no = roll;
  };
  void disp()
  {
    cout << "Roll No. " << roll_no << endl;
  }
};

class Theory : public virtual Student
{
protected:
  int theory_marks_1;
  int theory_marks_2;

public:
  Theory(int th_marks_1, int th_marks_2, int roll) : Student(roll)
  {
    theory_marks_1 = th_marks_1;
    theory_marks_2 = th_marks_2;
  }
  void disp()
  {
    cout << "Theory 1 " << theory_marks_1 << " Theory 2 " << theory_marks_1 << endl;
  }
};

class Practical : public virtual Student
{
protected:
  int practical_marks_1;
  int practical_marks_2;

public:
  Practical(int pr_marks_1, int pr_marks_2, int roll) : Student(roll)
  {
    practical_marks_1 = pr_marks_1;
    practical_marks_2 = pr_marks_2;
  }
  void disp()
  {
    cout << "Practical 1 " << practical_marks_1 << " Practical 2 " << practical_marks_2 << endl;
  }
};

class Result : public Theory, public Practical
{
  int total1, total2;

public:
  Result(int roll, int t1, int t2, int p1, int p2) : Theory(t1, t2, roll), Practical(p1, p2, roll), Student(roll)
  {
    total1 = t1 + p1;
    total2 = t2 + p2;
  }
  void displayResult()
  {

    Student::disp();
    Practical::disp();
    Theory::disp();
    cout << "Total marks 1 = " << total1 << " Total marks 2 = " << total2 << endl;
  }
};
int main()
{
  int r, t1, t2, p1, p2;
  cout << "Enter roll, theory1, theory2, practical1, practical2 ";
  cin >> r >> t1 >> t2 >> p1 >> p2;
  Result R(r, t1, t2, p1, p2);
  R.displayResult();
  return 0;
}
