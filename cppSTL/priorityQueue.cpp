#include<iostream>
#include<queue>

using namespace std;

int main(){
    // priority_queue<int> pq;
    // reverse order off priority_queue
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(1);
    pq.push(6);
    pq.push(3);
    pq.push(7);

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
    
}