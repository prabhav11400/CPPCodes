#include<iostream>
using namespace std;
class Student{float age ,roll_no;
public:
void setData(float age,int roll_no){
    this->age=age;
    this->roll_no=roll_no;
}
void getData(void){
    cout<<"The Age is"<<age<<endl;
    cout<<"The roll_no is"<<roll_no<<endl;
    }
};

int main(){
Student Prabhav,Aman;
Prabhav.setData(17.3,11004);
Aman.setData(19.7,04);
Prabhav.getData();
Aman.getData();
return 0;

}