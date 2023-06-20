#include<iostream>
using namespace std;
union students{
    int id;
    int marks;
    float fav_char;
};
int main() {students s1,s2,s3;
// int i;
// cin>>i;
s1.id=34;
// s1.marks=44;
// s1.fav_char='P';
cout<<s1.id<<endl;

// if (i=1)
// {
//     cout<<s1.id<<endl;
// }
// else if (i=2)
// {
//    cout<<s1.marks<<endl; 
// }
// else if(i=3)
// {
//     cout<<s1.fav_char<<endl;
// }

     
     return 0;}