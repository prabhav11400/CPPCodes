// we have 3 classes ,and all 3 are having functions of same name(let func).we inheritted all the -
// - three classes in derived class .Now problen is that ,all 3 functions of same name have -
// - been inherited in derived class. So if in main() i will creat an object(obj) of derived class -
// - and call as obj.func ,then ,derived class will be confussed , which func function have to be implemented.

// ther are two ways to get rid of this kind of ambiguity-
// (1) func ka name badalkr func1,func2,func3 kr do. so main me requirement ke anusar obj.func1(), obj.func2(),obj.func3() use kr lo.
// (2) or class derived me scope sresolution operator ka use krkr ambiguity hata do eg==
#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are You?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"AAP KAISE HO?"<<endl;
    }
};
class derived : public Base1, public Base2{
    public:
    void greet(){
        Base1::greet();
    }
};
int main(){
    derived d;
    Base1 o1;
    Base2 o2;
    o1.greet();
    o2.greet();
    d.greet();
}