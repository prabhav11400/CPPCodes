#include <iostream>
#include <cmath>
using namespace std;

class Sim_Cal{
// public :
// float a,b;
// void get_input(int x, int y){
//     cout<<"Enter the values of the two inputs"<<endl;
//     cin>>x ;
//     cin>>y;
//     a=x;
//     b=y;
// }
// void operation(int m){
//     cout<<"inter 1,2,3,4 for +,-,*,/ respectively";
//     cin>>m;
//     if(m==1){
//         cout<<"The sum is "<<a+b<<endl;
//     }
//     else if(m==2){
//         cout<<"The Subtraction is"<<a-b<<endl;
//     }
//     else if(m==3){
//         cout<<"The Product is a*b"<<a*b<<endl;
//     }
//     else if(m==4){
//         cout<<"The division is a/b"<<a/b<<endl;
//     }
// }
 };

class Sci_Cal{
    public :
float a,b;
void get_input(float x, float y){
    cout<<"Enter the values of the two inputs"<<endl;
    cin>>x ;
    cin>>y;
    a=x;
    b=y;
}
void operation(int m){
    cout<<"inter 1,2,3,4 for pow(base,exponent),logBase(num),sin(angle in radiun),cos(angle in radiun) respectively";
    cin>>m;
    if(m==1){
        cout<<"The power is "<<pow(a,b)<<endl;
    }
    else if(m==2){
        cout<<"The logarithm is"<<log10(b)<<endl;
    }
    else if(m==3){
        cout<<"The sin is"<<sin(a+b)<<endl;
    }
    else if(m==4){
        cout<<"The cosine is a/b"<<cos(a+b)<<endl;
    }
}


};

class Hyb_Cal: public Sim_Cal ,  public Sci_Cal{

};

int main(){float p,q;
   int r ;
    Hyb_Cal H;
    H.get_input(p,q);
    H.operation(r);


    return 0;
}