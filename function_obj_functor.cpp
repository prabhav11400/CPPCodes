#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
//  sorting in all the elements of the array.

int main(){
    int arr[]={4,1,3,8,12,7};
    sort(arr,arr+6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
//sorting in frist 4 elements, rest are kept as it is.
/*
int main(){
    int arr[]={4,1,3,8,12,7};
    sort(arr,arr+4);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/
//sorting in decreasing order off all length.
/*int main(){
    int arr[]={4,1,3,8,12,7};
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/
//sorting in decreasing order in first 4 elements.
/*int main(){
    int arr[]={4,1,3,8,12,7};
    sort(arr,arr+4,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/