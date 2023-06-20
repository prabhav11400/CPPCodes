#include<iostream>
using namespace std;
class complex{ int a,b;
public:
void setdata(int v1, int v2){
a=v1;
b=v2;
}
void printnumber(){
    cout<<"Your complex number is "<<a<<"+i"<<b<<endl;
}
friend complex sumcomplex(complex o1,complex o2);
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main() {complex c1,c2,sum;
c1.setdata(2,3);
c1.printnumber();
c2.setdata(1,-1);
c2.printnumber();

sum=sumcomplex(c1,c2);
sum.printnumber();
     
     return 0;}