#include<iostream>
using namespace std ;

int main(){
    int arr[11] = { 1,2,4,2,1,4,5,2,3,4,2} ;
    int hash[12] ={0} ;

    for(int i = 0 ; i < 11 ; i++){
        hash[arr[i]]++ ;
    }

    for(int i = 0 ; i < 11 ; i++){
        cout << i << " " << hash[i]  ;
        cout << endl ;
    }
    cout << endl ;
    cout <<"Enter number" << endl ;
    
    int num ; 
    cin >> num ;

    cout << hash[num] ;

}
