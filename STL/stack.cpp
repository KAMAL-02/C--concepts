#include<bits/stdc++.h>
using namespace std ; 

int main(){
    stack<int>s ; 
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl ;
    s.pop();
    //printing stack
    while(!s.empty()){
        cout << s.top() ;
        s.pop() ;
    }
    return 0 ;
}
