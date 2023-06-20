#include<iostream>
using namespace std;
class bankdeposit{
    int principal;
    int years;
    float interest_rate;
    float return_value;

    public:// bankdeposit(){};
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();
};
bankdeposit::bankdeposit(int p,int y,float r){
    principal=p;
    years=y;
    interest_rate=r;
    return_value=principal;
    for(int i=0;i<y;i++){
        return_value=return_value*(1+r);
    }
}
bankdeposit::bankdeposit(int p,int y,int r){
    principal=p;
    years=y;
    interest_rate=float(r)/100;
    return_value=principal;
    for(int i=0;i<y;i++){
        return_value=return_value*(1+interest_rate);
    }
}
void bankdeposit::show(){
cout<<endl<<"Principal amount was"<<principal<<endl<<"Return value after"<<years<<"is"<<return_value<<endl;
}
int main() { //bankdeposit bd1,bd2 ,bd3;
int p,y,R;
float r;
cout<<"Enter the value of p,y and r"<<endl;
cin>>p>>y>>r;
bankdeposit bd1=bankdeposit(p,y,r);
bd1.show();
cout<<"Enter the value of p,y and R"<<endl;
cin>>p>>y>>R;
bankdeposit bd2=bankdeposit(p,y,R);
bd2.show();
return 0;}