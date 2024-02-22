#include<iostream>
using namespace std ;

int main(){
    string s = "abfghyfffdd" ;
    cout << s << endl ;

    int hash[256] ={0} ;
    for(int i = 0 ; i < s.size() ; i++){
        hash[s[i]]++;
    }

    char a ; 
    cin >> a ;

    cout << endl << hash[a] ;
    return 0 ;



}
