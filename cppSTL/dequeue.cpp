#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque <int> d ;
    d.push_back(5);
    d.push_back(4);
    d.emplace_back(3);
    d.emplace_back(2);
    d.push_front(1);
    d.emplace_front(6);
    d.pop_front();
    d.pop_back();

    for(int val: d){
        cout<<val<<" ";
    }


    cout<<"\nAnother method : "<<endl;

    deque <int> d1 = {1,2,3,4,5};
    for( int val1 : d1){
        cout<<val1<<" ";
    }
    cout<<endl;
    cout<<d1[2]<<endl; // in dequeue didnot gives an error
        return 0;
}