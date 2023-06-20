#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}



int main(){list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    // list1[0]=4; //not valid
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 

//  list1.pop_back();
//  list1.pop_back();

    
 
    
    list<int> list2(3);  //empty list of length 3
    list<int> :: iterator it = list2.begin();
    *it = 45;
    it++;
    *it = 6;
    it++;
    *it = 9;
    it++;


    // list2[0]=45; // none of these kind is valid in list, theyare valid in vectors/
    // list2[1]=9;
    // list2[2]=6;



// list2.push_back(1); push back also does not work for lists whose size is fixed.
// list2.push_back(3);
// list2.push_back(4);


    // list1.pop_front();
    // list1.remove(9);
    display(list1);
    list1.sort();
    display(list1);
    display(list2);
    list2.sort();
    display(list2);
    list1.merge(list2);
    display(list1);
    list1.remove(9);
    display(list1);
    list1.reverse();
    display(list1);
 




    return 0;
}
