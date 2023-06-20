#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public: void setdata(void){
     cin>>id;
     count++;
    }
    void getdata(void){
        cout<<"Theid of the employee is"<<id<<"and this is employee number"<<count<<endl;
    }
    static void getCount(void){
        cout<<" The value of count is "<<count<<endl;
    }
};

int employee :: count ;


int main() {employee harry,rohan,subham;
harry.setdata();
harry.getdata();
employee::getCount();

rohan.setdata();
rohan.getdata();
employee::getCount();

subham.setdata();
subham.getdata();
employee::getCount();
     
     return 0;}