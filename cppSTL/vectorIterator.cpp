#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector <int> vec = {1,2,3,4,5};

    vector <int> :: iterator it;
     cout<<"iterating in forward direction: "<<endl;
    for(it = vec.begin(); it!= vec.end() ; it++){
        cout <<*(it)<<endl;
    }

     cout<<"iterating in reverse direction: "<<endl;
    for(auto it = vec.rbegin(); it!= vec.rend() ; it++){
        cout <<*(it)<<endl;
    }
    return 0;
}