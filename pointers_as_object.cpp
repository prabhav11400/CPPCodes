#include<iostream>
using namespace std;

class complex {
int real ,imaginary;
public: 
void setData(int a,int b){
    real=a;
    imaginary=b;
}

void getData(){
    cout<<"Real Part is :"<<real<<endl;
    cout<<"imaginary Part is :"<<imaginary<<endl;
}

};

/*
int main(){complex C1;
complex *ptr = &C1;
(*ptr).setData(1,4);
(*ptr).getData();

    return 0;
}*/

/*
int main(){
complex *ptr =new complex ;
(*ptr).setData(1,4);
(*ptr).getData();
    return 0;
}*/

/*
int main(){
    complex *ptr= new complex ;
    ptr -> setData(1,4);
    ptr -> getData();
    return 0;
}*/

//array of objects.
int main(){  
    complex *ptr= new complex[4]; // 4 objects ka array
ptr -> setData(1,4);
ptr -> getData();
(ptr+1) -> setData(2,8);
(ptr+1) -> getData();
(ptr+2) -> setData(3,12);
(ptr+2) -> getData();
(ptr+3) -> setData(4,16);
(ptr+3) -> getData();
return 0;
    }
