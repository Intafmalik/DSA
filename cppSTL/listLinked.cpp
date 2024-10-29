#include <iostream>
#include <list>
using namespace std;


int main(){
    list <int> l ;
    l.push_back(5);
    l.push_back(4);
    l.emplace_back(3);
    l.emplace_back(2);
    l.push_front(1);
    l.emplace_front(6);
    l.pop_front();
    l.pop_back();

    for(int val: l){
        cout<<val<<" ";
    }


    cout<<"\nAnother method : "<<endl;

    list <int> l1 = {1,2,3,4,5};
    for( int val1 : l1){
        cout<<val1<<" ";
    }
    cout<<endl;
    // cout<<l[2]<<endl; // not use in list gives error
        return 0;
}