#include<iostream>
using namespace std;
int main(){int n;
    cout<<"Enter the size of your VLA";
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value no"<<i;
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
       
    }

    return 0;
}