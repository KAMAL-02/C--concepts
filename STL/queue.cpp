#include<bits/stdc++.h>
using namespace std ; 

void print(queue<int>q){
    while(!q.empty()){
        cout << q.front() << " " ;
        q.pop();
    }
    cout << endl ;
}
int main(){
    queue<int>q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    print(q);

    q.pop();
    cout << "After popping : " ;
    print(q);
    int x = q.back()+=5 ;
    cout << x << endl ;

    cout << q.front() ;
}
