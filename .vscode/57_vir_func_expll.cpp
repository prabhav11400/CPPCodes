/* 
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
virtual void display(){
    cout<<"Nothing";
}

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
void display(){
    cout<<"This is an amazing text with title "<<title<<endl;
    cout<<"Rating "<<rating<<endl;
    cout<<"No of words in this text tutorial is "<<words<<endl;
}

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
    Cppvideo.display();

    // for CWH text
    words=433;
    // lets keep rating t=and title same.
    CWHtext Cpptext(title,rating,words);
    Cpptext.display();

    return 0;
}
*/

// Calling both display function of derived class using pointers


/* #include<iostream>
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
virtual void display(){
    cout<<"Nothing";
}

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
void display(){
    cout<<"This is an amazing text with title "<<title<<endl;
    cout<<"Rating "<<rating<<endl;
    cout<<"No of words in this text tutorial is "<<words<<endl;
}

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
    CWH *tuts[2]; // declairing an array of objects of CWH 
    tuts[0]=&Cppvid eo;
    tuts[1]=&Cpptext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}


// removing virtual from base class
/*
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
void display(){
    cout<<"Nothing";
}

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
void display(){
    cout<<"This is an amazing text with title "<<title<<endl;
    cout<<"Rating "<<rating<<endl;
    cout<<"No of words in this text tutorial is "<<words<<endl;
}

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
}*/
/*
Rules for virtual functions
They cannot be static
They are accessed by object pointers
Virtual functions can be a friend of another class
A virtual function in the base class might not be used.
If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/

// ek derived class ka display gayab kr den aur pure vistual na ho base class ka display.
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
