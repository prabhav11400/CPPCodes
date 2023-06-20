#include<iostream>
using namespace std;

class Sim_Cal{
public :
float a,b;
void get_input(int x, int y){
    cout<<"Enter the values of the two inputs"<<endl;
    cin>>x ;
    cin>>y;
    a=x;
    b=y;
}
void operation(int m){
    cout<<"inter 1,2,3,4 for +,-,*,/ respectively";
    cin>>m;
    if(m==1){
        cout<<"The sum is "<<a+b<<endl;
    }
    else if(m==2){
        cout<<"The Subtraction is"<<a-b<<endl;
    }
    else if(m==3){
        cout<<"The Product is a*b"<<a*b<<endl;
    }
    else if(m==4){
        cout<<"The division is a/b"<<a/b<<endl;
    }
}
};



int main(){int p,q,r;
    Sim_Cal H;
    H.get_input(p,q);
    H.operation(r);


    return 0;
}