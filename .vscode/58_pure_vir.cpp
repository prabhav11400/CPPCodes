// ek derived class ka display gayab kr den aur pure vistual na ho base class ka display.
//then simply base class ka display run ho jayega
// #include<iostream>
// #include<cstring>
// using namespace std;

// class CWH{
// protected:
// string title;
// float rating;
// public:
// // defining base class constructor
// CWH(string s,float r){
//     title=s;
//     rating=r;
// }
// virtual void display(){
//     cout<<"Nothing";
// }

// };

// class CWHvideo: public CWH{
// float videolength;
// public:
// // defining derived class constructor
// CWHvideo(string s,float r,float vl):CWH(s,r){
//     videolength=vl;
// }
// void display(){
//     cout<<"This is an amazing video with title "<<title<<endl;
//     cout<<"Rating "<<rating<<endl;
//     cout<<"Length  of the video is "<<videolength<<" minuts"<<endl;
// }

// };

// class CWHtext: public CWH{
// int words;
// public:
// // defining derived class constructor
// CWHtext(string s,float r,int wc):CWH(s,r){
//     words=wc;
// }
// /* void display(){
//     cout<<"This is an amazing text with title "<<title<<endl;
//     cout<<"Rating "<<rating<<endl;
//     cout<<"No of words in this text tutorial is "<<words<<endl;
// }*/

// };

// int main(){
//     string title ;
//     float rating,vlen;
//     int words;
//     // for CWH video
//     title="Basic C++ Tutorial";
//     vlen=4.56;
//     rating=4.89;
//     CWHvideo Cppvideo(title,rating,vlen);
//     // Cppvideo.display();

//     // for CWH text
//     words=433;
//     // lets keep rating t=and title same.
//     CWHtext Cpptext(title,rating,words);
//     //Cpptext.display();
//     CWH *tuts[2];
//     tuts[0]=&Cppvideo;
//     tuts[1]=&Cpptext;
//     tuts[0]->display();
//     tuts[1]->display();

//     return 0;
// }

// if base class ka display pure virtual function ho and derived class ka display gayab kr den to--
#include<iostream>
#include<cstring>
using namespace std;

class CWH{
protected:
string title;
float rating;
public:
// defining base class constructor
CWH(string s,float r){
    title=s;
    rating=r;
}
virtual void display()=0;

};

class CWHvideo: public CWH{
float videolength;
public:
// defining derived class constructor
CWHvideo(string s,float r,float vl):CWH(s,r){
    videolength=vl;
}
void display(){
    cout<<"This is an amazing video with title "<<title<<endl;
    cout<<"Rating "<<rating<<endl;
    cout<<"Length  of the video is "<<videolength<<" minuts"<<endl;
}

};

class CWHtext: public CWH{
int words;
public:
// defining derived class constructor
CWHtext(string s,float r,int wc):CWH(s,r){
    words=wc;
}
/* void display(){
    cout<<"This is an amazing text with title "<<title<<endl;
    cout<<"Rating "<<rating<<endl;
    cout<<"No of words in this text tutorial is "<<words<<endl;
}*/

};

int main(){
    string title ;
    float rating,vlen;
    int words;
    // for CWH video
    title="Basic C++ Tutorial";
    vlen=4.56;
    rating=4.89;
    CWHvideo Cppvideo(title,rating,vlen);
    // Cppvideo.display();

    // for CWH text
    words=433;
    // lets keep rating t=and title same.
    CWHtext Cpptext(title,rating,words);
    //Cpptext.display();
    CWH *tuts[2];
    tuts[0]=&Cppvideo;
    tuts[1]=&Cpptext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// here CWH base class is Abstract base class== jisme atleast one Pure virtual function ho
