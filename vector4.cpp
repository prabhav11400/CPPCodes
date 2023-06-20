#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(9);
    // v[0]=3;
    // cout<<sizeof(v)<<endl;
    // v[1]=5;
    // cout<<sizeof(v)<<endl;
    // v[2]=8;
    // cout<<sizeof(v)<<endl;
    // v[3]=0;
    // cout<<sizeof(v)<<endl;
    // v[4]=9;
    // cout<<sizeof(v)<<endl;
    // v[5]=4;
    // cout<<sizeof(v)<<endl;
    v={1,2,4,5,7,8};
    cout<<v[1]<<v[2]<<v[3]<<v[0]<<v[4]<<v[5];    
}
