#include<iostream>
using namespace std;
template<class T1,class T2>
float avg(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
float a;
a=avg(5,2);
cout<<a<<endl;
a=avg(5,3);
cout<<a<<endl;
return 0;

}