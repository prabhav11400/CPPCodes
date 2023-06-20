#include<iostream>
using namespace std;

int main() {
     int a=1;
     int * b=&a;
     int **c=&b;
     cout<<*b<<endl;
     cout<<**c<<endl;
     cout<<*c<<endl;
     




     return 0;}