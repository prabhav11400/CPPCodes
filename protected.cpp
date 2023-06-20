#include<iostream>
using namespace std;
class base {
    protected: int a;
    private: int b;

};
class derived :protected Base{

}
int main(){
    base b;
    derived d;
    //cout<<b.a; even this will not work since protect ke use se hm private ko keval inherite kr skte hain , pr main function me directly call nhi kr sakte hain.
    cout<<d.a;// this will not work since a is protected in both derived and base classes
    return 0;
}