#include<iostream>
#include<vector>

using namespace std;


void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){int i;
vector<int>vec1;
int element,size;
cout<<"Enter the size of your vector "<<endl;
cin>>size;
for( i=0;i<size;i++){
    cout<<"Enter the element to add in this vector"<<endl;
    cin>>element;
    vec1.push_back(element);
}
// vec1.pop_back();
// vec1.pop_back();
display(vec1);
vector<int>::iterator iter=vec1.begin();
// vec1.insert(iter+1,5,444);
display(vec1);
vec1.insert(iter,5,444);
display(vec1);
cout<<vec1.at(0)<<endl;
cout<<vec1.at(1)<<endl;
cout<<vec1.at(2)<<endl;
cout<<vec1.at(3)<<endl;
cout<<vec1.at(4)<<endl;
cout<<vec1.at(5)<<endl;

return 0;
}