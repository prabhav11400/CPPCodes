#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Tell me your age"<<endl;
cin>>age;
if(age<18){
    cout<<"You cannot drive\n";
}
else if(age==18){
    cout<<"you can drive";
}
else{
    cout<<"wow!";
}


}
