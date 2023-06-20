#include <iostream>   // bubble sort
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>=arr[j+1]){
                int k = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = k;
            }
        }
    }
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}