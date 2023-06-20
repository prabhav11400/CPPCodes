#include<iostream>
using namespace std;
template<class T1,class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
myclass(T1 a,T2 b){
    data1=a;
    data2=b;
}
void display(){
    cout<<this->data1<<this->data2;
}
};
int main(){
    myclass<int,char>obj(1,'c');
    obj.display();
    return 0;
}
// kuch nhi hai template bs int ,float ka nam kuch particular variables ke liye T1, T2 ,T3 rkh diye hain. Bs itna yad rkhna hoga ki T1 int haii ya float ,same with T2.