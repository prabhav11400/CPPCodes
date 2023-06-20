#include<iostream>
#include<cstring>
using namespace std;
class binary{
string s;
public:
 void read(void);
 void chk_bin(void);
 void ones_compliment(void);
 void display(void);
};
void binary ::read(void){cout<<"Enter the binary number\n";
    cin>>s;
     cout<<s;
}
void binary:: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if((s.at(i)!='1') && (s.at(i)!='0')){
            cout<<"\nIncorrect binary formate"<<endl;
            exit(0);
        }
        
    } cout<<"Yes it is binary\n";
    
}
void binary::ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
void binary ::display(void){
    cout<<"Modified no is.\n";
    cout<<s;
}
int main() {binary b;
     b.read();
     b.chk_bin();
     b.display();
     b.ones_compliment();
     b.display();
     
     return 0;}