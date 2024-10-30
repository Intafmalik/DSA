#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> s;
    s.push(3);
    s.push(2);
    s.push(6);
    s.push(1);
    cout<<"Size of Stack s is : "<<s.size()<<endl;

    queue<int> s2;
    cout<<"Size of Stack s2 is : "<<s2.size()<<endl;
    s2.swap(s);
    cout<<"Size of Stack after swapping s2 is : "<<s2.size()<<endl;
    cout<<"Size of Stack after swapping s is : "<<s.size()<<endl;
    
     while (!s2.empty())
    {
        cout<<s2.front()<<" ";
        s2.pop();

    }
    cout<<"\nSize of Stack s2 is : "<<s2.size();
    cout<<endl;
    return 0;
    
}