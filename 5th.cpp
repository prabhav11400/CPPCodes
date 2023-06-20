#include<iostream>

using namespace std;
int main(){
    float a =12;
    long double b= 2653;
    cout<<"The ssize of a is"<<sizeof(a)<<endl;
    cout<<"The ssize of b is"<<sizeof(b)<<endl;
    cout<<"The ssize of 34.7 is"<<sizeof(34.7)<<endl;
    cout<<"The ssize of 34.7f is"<<sizeof(34.7f)<<endl;
    cout<<"The ssize of 34.7F is"<<sizeof(34.7F)<<endl;
    cout<<"The ssize of 34.7l is"<<sizeof(34.7l)<<endl;
    cout<<"The ssize of 34.7L is"<<sizeof(34.7L)<<endl;
    float that=5;
    return 0;
}