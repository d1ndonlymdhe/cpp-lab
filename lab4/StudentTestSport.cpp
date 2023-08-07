#include <iostream>
using namespace std;

class Student
{
    int roll_no;

public:
    void setRoll()
    {
        cout << "Enter student roll no. " << endl;
        cin >> roll_no;
    }
    void displayRoll()
    {
        cout << "Roll no = " << roll_no;
    }
};

class Test : virtual public Student
{
protected:
    int sub1, sub2;

public:
    void setMarks()
    {
        cout << "Enter marks in two subjects" << endl;
        cin >> sub1 >> sub2;
    }
    void displayMarks()
    {
        cout << "Marks in sub 1 = " << sub1 << " Marks in sub 2 = " << sub2 << endl;
    }
};

class Sport : virtual public Student
{
protected:
    int score;

public:
    void setScore()
    {
        cout << "Enter score in tennis" << endl;
        cin >> score;
    }
    void displayScore()
    {
        cout << "Score in tennis = " << score << endl;
    }
};

class Result : public Sport, public Test
{
public:
    void setAll()
    {
        setRoll();
        setMarks();
        setScore();
    }
    void displayAll()
    {
        displayRoll();
        displayMarks();
        displayScore();
    }
};

int main()
{
    Result r;
    r.setAll();
    r.displayAll();
    return 0;
}
