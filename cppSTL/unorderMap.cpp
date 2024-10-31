#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mp;

    mp.emplace("camera",25);
    mp.emplace("laptop",225);
    mp.emplace("tv",15);
    mp.emplace("mobile",25);
    mp.emplace("tap",50);

    mp.erase(mp.find("camera"));
    for(auto m: mp){
        cout<<m.first<<" "<<m.second<<endl;
    }
    cout<<endl;
    return 0;
}