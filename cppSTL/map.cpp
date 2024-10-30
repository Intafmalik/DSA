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

    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}