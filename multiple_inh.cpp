#include<iostream>
using namespace std;
class base1{
    protected:
    int base1int;
    public :
    void set_base1int(int a){
        base1int=a;
    }
};

class base2{
    protected: 
    int base2int ;
    public :
    void set_base2int(int a){
        base2int=a;
    }
};

class base3{
public :
int base3int ;
void set_base3int(int a){
    base3int=a;
}
};

class derived : public base1,public base2, public base3{
    public:
    void show(){
        cout<<base1int<<endl;
        cout<<base2int<<endl;
        cout<<base3int<<endl;
        cout<<base3int+base2int+base1int<<endl;
    }
};

int main(){
derived aman;
aman.set_base1int(3);
aman.set_base2int(5);
aman.set_base3int(7);
aman.show();


    return 0;
}