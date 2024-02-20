#include<bits/stdc++.h>
using namespace std ;

int main(){
    pair<int,int>p = {1,2} ;
    cout << p.first <<" "<<p.second << endl ;

    pair<int , pair<float , float>>a = { 1 , {2.3,3}};
    cout << a.second.first << endl ;

    pair<int , int>arr[] = {{1,2} ,{3,4}};
    cout << arr[1].second << endl;

    return 0;
}
