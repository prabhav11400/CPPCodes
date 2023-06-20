#include<iostream>
using namespace std;
class complex{
    int a,b;
    public : void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setdatabysum(complex o1,complex o2){
        a=o1.a+o2.a; //is new function ka output a is o1 and o2 ke a ke sum ke barabar hai.
        b=o1.b+o2.b;
    }
    void printnumber(){
        cout<<"Your complex number is "<<a<<"+i"<<b;
    }
};
int main() {complex c1,c2,c3;
c1.setdata(1,2); // first complex number ko define kiya ;
c1.printnumber();
c2.setdata(3,4); // 2nd complex number ko define kiya
c2.printnumber();
c3.setdatabysum(c1,c2); // sum of 2 complex numbers
c3.printnumber();
     
     return 0;}