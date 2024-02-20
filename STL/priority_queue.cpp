#include<bits/stdc++.h>
using namespace std ; 

void print(priority_queue<int>pq){
    while(!pq.empty()){
        cout << pq.top() << " " ;
        pq.pop();
    }
    cout << endl ;
}

int main(){
    priority_queue<int>pq;
    pq.push(2);
    pq.push(4);
    pq.push(3);
    pq.push(1);

    print(pq);
}
