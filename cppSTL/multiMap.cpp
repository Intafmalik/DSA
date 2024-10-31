#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> mp;

    mp.emplace("camera",25);
    mp.emplace("camera",25);
    mp.emplace("camera",25);
    mp.emplace("camera",25);
    mp.emplace("camera",25);

    mp.erase(mp.find("camera"));
    for(auto m: mp){
        cout<<m.first<<" "<<m.second<<endl;
    }
    cout<<endl;
    return 0;
}