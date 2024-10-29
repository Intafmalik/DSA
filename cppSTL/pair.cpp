#include<iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){
    pair <string, int> pr= {"Hello", 29};
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;

    cout<<"Multiple pair option "<<endl;
    pair<int, pair<char, int>> pr1 = {4,{'a',1}};
    cout<<pr1.first<<endl;
    // cout<<pr1.second<<endl; // gives ans error becoz 2nd is itself pair
    cout<<pr1.second.first<<endl;
    cout<<pr1.second.second<<endl;

    cout<<"pair with vector: "<<endl;
    vector <pair<char, int>> vec = {{'a',1},{'b',2},{'c',3}};
    // for(pair<char,int> val: vec){  
    // or
    for(auto val: vec){
        cout<<val.first<<" "<<val.second<<endl;
    }  
    return 0;    
    }