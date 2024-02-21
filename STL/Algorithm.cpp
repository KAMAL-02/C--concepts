#include<bits/stdc++.h>
using namespace std ;

void print(vector<int>v){
    for(auto it : v){
        cout << it << " " ;
    }
    cout << endl ;
}
bool comp(pair<int , int>p1 , pair<int , int>p2){
    if(p1.second < p2.second){
        return true ;
    }
    if(p1.second > p2.second){
        return false ;
    }
    if(p1.first > p2.first){
        return true ;
    }else{
        return false ;
    }
}

int main(){
    int num = 5 ;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl ;

    string s = "123";
    do
    {
        cout << s << endl ;
    } while (next_permutation(s.begin(),s.end()));

    vector<int>v= {4,3,6,2,5,7};
    sort(v.begin(),v.end());
    print(v);
    sort(v.begin(),v.end(), greater<int>());
    print(v);

    pair<int , int>p[] = {{1,2},{2,1},{4,1}};
    sort(p , p+3 ,comp);

    for(int i = 0 ; i < 3 ; i++){
        cout << p[i].first <<" " << p[i].second << endl ;
    }

    return 0 ;
}
