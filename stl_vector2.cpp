#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1); 
    // vector<int> vec1;     
    vector<int> vec0;      //zero length integer vector
    display(vec0);
    vector<char> vec2(4);  //4-element character vector
    display(vec2);
    vec2.push_back('5');
    display(vec2);
    vector<char> vec3(vec2);//4-element character vector from vec2
    display(vec3);
    vector<int> vec4(6,3); //6-element vector of 3s   
    display(vec4);
        return 0;
}
