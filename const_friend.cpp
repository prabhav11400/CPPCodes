#include<iostream>
using namespace std;
class C2;
class C1{

friend void max_num(C1,C2 );
public:
int a;
 C1(int m){
    a=m;
}
};
class C2{ 
friend void max_num(C1,C2 );
public: 
int b;
C2(int n){
    b=n;
}

};
void max_num(C1 x,C2 y){
    if (x.a > y.b){
    cout<<x.a;
}
else if(x.a==y.b){
    cout<< "equal"<<endl
;}
else if(x.a< y.b){
    cout<<y.b;
}

}
int main(){ 
    C1 x(7);
    C2 y(99);
    cout<<x.a<<endl;
    cout<<y.b<<endl;
    max_num(x,y);

    return 0;
}