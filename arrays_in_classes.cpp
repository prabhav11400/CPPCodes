#include<iostream>
using namespace std;

class shop{
    int itemId[100];// 100 length ka integer array banaya 100 id's can be stored.
    int itemPrice[100]; // 100 length ka integer array banaya 100 marks can be stored.
    int counter=0;
    public :
    // void initCounter(void); //to initialize counter by 0, since arrays me entries 0 se store hoti hain.
    /* void initCounter(void){
        counter =0;
    } */
    void setPrice(void);// for defining prizes corresponding to id's
    void displayPrice(void); // for displaying prizes corresponding to ids
};/* void shop :: initCounter(void){
    counter =0;
} */
void shop:: setPrice(void){
    cout<<"Enter ID of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];// itemId[0] me first time store hogi.
    cout<<"Enter price of this item\n" ;
    cin>>itemPrice[counter];
    counter ++;
}
void shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main() {shop dukan; // object of class shop 
// dukan.initCounter();
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.setPrice();
dukan.displayPrice();
     return 0;}