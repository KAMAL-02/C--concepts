#include<bits/stdc++.h>
using namespace std ;

void print(set<int>s){
    for(auto it : s){
        cout << it <<  " " ;
    }  
    cout << endl ;
}

int main(){
    set<int>s ;
    s.insert(1);
    s.insert(6);
    s.emplace(3);
    s.emplace(3);
    s.emplace(2);

    print(s);

    auto it = s.find(3);
    cout << *it << endl ;

    s.erase(it);
    print(s);

    auto a = s.upper_bound(3);
    auto b = s.lower_bound(3);
    cout << *a << " " << *b << endl ;

    return 0 ;   
}
