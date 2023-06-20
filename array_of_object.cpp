#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
public:
    void setId(void){
        salary=122;
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main() {employee fb[4];//  fb array ke elements objects honge jisme hm bina nam bataye data store kr lenge.
 for(int i=0; i<4;i++)
    {fb[i].setId();
    fb[i].getId();}
     
     return 0;}