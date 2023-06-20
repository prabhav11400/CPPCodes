#include<iostream>
using namespace  std;
template<class T1=int,class T2=float, class T3=char>
class Aman{
public:
T1 a;
T2 b;
T3 c;
Aman(T1 x,T2 y,T3 z){
    a=x;
    b=y;
    c=z;
}
void display(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
}};


int main(){
    Aman <>h1(4,5.6,'c'); //default template se printing
    h1.display();
    Aman<char,float,int>h2('p',9.999999,4);// default is owerwritten by parameterized template.
    h2.display();
    return 0;
}
// so default template ko change kr skte hain easily


