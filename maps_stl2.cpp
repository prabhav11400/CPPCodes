#include<iostream>
#include<string>
#include<map>
using namespace std;


  int main(){
    map<string,int>marksmap;
    marksmap["Harry"]=98;
    marksmap["Rohan"]=59;
    marksmap["Subham"]=72;

    marksmap.insert({{"Aman",99},{"Prabhav",100}});
map<string,int>::iterator itr;
for(itr=marksmap.begin();itr!=marksmap.end();){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    itr++;
}
cout<<marksmap.size()<<endl;
cout<<marksmap.max_size()<<endl;
cout<<sizeof(marksmap)<<endl;
cout<<marksmap.empty()<<endl;
cout<<sizeof(marksmap)<<endl;
cout<<marksmap.size()<<endl;
return 0;
  }