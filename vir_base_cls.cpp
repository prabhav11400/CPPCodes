/* [student -- test
    student -- sport
    test    -- result
    sport   -- result ]
    */

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths_marks, physics_marks;

public:
    void set_marks(float m1, float m2)
    {
        maths_marks = m1;
        physics_marks = m2;
    }
    void print_marks(void)
    {
        cout << "You have obtained : "
             << "maths: " << maths_marks << endl
             << "physics : " << physics_marks << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT  score is " << score << endl;
    }
};

class result : public test, public sport
{
private:
    float total;

public:
    void display(void)
    {
        total = maths_marks + physics_marks + score;
        print_number();
        print_marks();
        print_score();
        cout << "Total Score: " << total<<" out of 30" << endl;
    }
};

int main()
{
    result harry;
    harry.set_marks(7, 8);
    harry.set_number(420);
    harry.set_score(9);
    harry.display();
    return 0;
}