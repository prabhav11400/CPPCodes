#include<iostream>
#include<fstream>
using namespace std;

// int main(){
//     ofstream out("Sample.txt");

//     return 0;
// }
// int main(){
//     string st="Aman babu ki first file";
//     ofstream out("sample_file_1.txt");//write operation
//      out<<st;

//     return 0;
// }

// reading mode
// int main(){
//     string st;
//     ifstream in("sample_1.txt");
//     in>>st;
//     cout<<st;
//      return 0;
// }

// to get out full one line
int main(){
    string st;
    ifstream in("sample_1.txt");
    // in>>st;
    getline(in,st);
    cout<<st;
     return 0;
}