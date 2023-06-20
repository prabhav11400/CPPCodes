#include<iostream>
using namespace std;


/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test
{
    int a;
    int b;
    // int b,a;

public:
    Test(int i, int j) : a(i), b(j)
    
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}


// any of the following can be used with the replacement of exact line no 19
// Test(int i,int j):a(i),b(5*i+j)
    // Test(int i,int j):a(i),b(a+i+j)
    // Test(int i,int j):a(i),b(a+j)
    // Test(int i,int j):a(b+i),b(j) // a ke initiallize hote samay b=0 hai,so a(b+i)=a(i)
    // Test(int i,int j):a(i+b),b(j) // a ke initiallize hote samay b=0 hai,so a(b+i)=a(i)
    // Test (int i,int j): b(j),a(i+b)