#include <iostream>
using namespace std;
#include<cmath>

int main(){
    int m ,n;
    cout<<"Enter two numbers separated by whitespace whose HCF you want to calculate\n";
    cin>>m >>n;
int c= fmin(m,n);
//cout << c;
//cout<<c;
for ( int i=c; i>=1; i--)
{
    if((m%i==0)&&(n%i==0)){
        cout<<"The hcf of given two numbers will be "<< i;
        break;
    }
}




}