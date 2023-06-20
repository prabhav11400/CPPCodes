#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    Employee(){}
};

class Programmer:public Employee{
    public:
    Programmer(int inpid){
        id=inpid;
    }
};
int main() {
    Programmer skillF(1);
    cout<<skillF.id<<endl;
    return 0;}