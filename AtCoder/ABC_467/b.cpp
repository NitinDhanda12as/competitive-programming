#include<bits/stdc++.h>
using namespace std ;

int main () {
    int N , A , B ;
    string S ;
    int diff = 0 ;

    cin >> N ;

    for(int i = 0 ; i < N ; i++ ) {
        cin >> A >> B >> S ;
        if( S == "keep") {
            diff += ( B-A ) ; 
        }
    }
    cout << diff ;
}