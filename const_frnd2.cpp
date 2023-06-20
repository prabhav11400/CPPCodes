#include<iostream>
using namespace std;
class C2;
class C1{

friend void max_num(C1,C2 );
int a;
public:

 C1(int m){
    a=m;
} 
//since a can be called only with any function of base(C1).so we need to make some function that will give a as output.
int geta(){
    return a;
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
    if (x.geta() > y.b){
    cout<<x.geta();
}
else if(x.geta()==y.b){
    cout<< "equal"<<endl
;}
else if(x.geta()< y.b){
    cout<<y.b;
}

}
int main(){ 
    C1 x(7);
    C2 y(99);
    cout<<x.geta()<<endl;
    cout<<y.b<<endl;
    max_num(x,y);

    return 0;
}