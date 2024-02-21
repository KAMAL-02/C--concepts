#include<bits/stdc++.h>
using namespace std ; 

void print(map<int , int> mp){
    for(auto it : mp){
        cout << it.first << " " << it.second << endl ;
    }
    cout << endl ;
}

int main(){
    map<int , int>mp ;
    //insertion in map
    mp[1]=2 ;
    mp.insert({2,3});
    mp.emplace(3,4);

    print(mp) ;

    cout << mp[1] ;
    auto it = mp.find(3);
    cout << it->second;
    return 0 ;


}
