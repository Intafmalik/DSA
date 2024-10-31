#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["TV"] = 100;
    mp["watch"] = 200;
    mp["computer"] = 300;
    mp["laptop"] = 100;

    mp.emplace("camera",25);
    

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    mp.erase("TV");
    cout<<"Äfter erasing the TV from the map: "<<endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
   if (mp.find("computer") != mp.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}