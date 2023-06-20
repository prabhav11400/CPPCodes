#include<iostream>
#include<string>
#include<map>
using namespace std;


  int main(){
    map<string,int>marksmap;
    marksmap["Harry"]=98;
    marksmap["Rohan"]=59;
    marksmap["Subham"]=72;
map<string,int>::iterator itr;
for(itr=marksmap.begin();itr!=marksmap.end();){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    itr++;
}

  }