#include<iostream>
using namespace std;
int main(){int n;
    // i have to take input n from user or even make it n/2 for odd make it 3n+1, untill number becomes 1.Print this algorithm
    cin>> n;
    cout<< n;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        cout<<" "<< n<<" ";
    }

    return 0;
}
// git testing
// this is another change