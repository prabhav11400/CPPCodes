/*#include<iostream>
using namespace std;
template<class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data =a;
    }
    void display();
};
template < class T>
void Harry <T>:: display(){
    cout<<data;
}
int main(){
Harry<float>h(5.7);
cout<<h.data<<endl;
h.display();
return 0;*/


// Template Function Overloading***
/*****Exact match takes the higher priority****** */
#include<iostream>
using namespace std;
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am templatized func() "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am templatized func1() "<<a<<endl;
}
int main(){
    func(4);
    func(4);
    func1(4);
    return 0;
}