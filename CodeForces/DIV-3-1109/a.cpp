#include<bits/stdc++.h>
using namespace std ;

int longestLine( string s , int n ) {
    int maxx = 0 ;
    int count = 0 ;
    for( int i = 0 ; i < n ; i++) {
        if( s[i] == '#' ) {
            count++ ;
            maxx = max( maxx , count ) ;
        }else if( s[i] == '*'){
            count = 0 ;
        }
    }
    return maxx ;
}

int main() {
    int t , n ;
    string s;
    cin >> t ;
    for( int i = 0 ; i < t ; i++ ) {
        int n ;
        cin >> n;
        cin >> s ;
        int length = longestLine( s , n ) ;
        cout << (length+1)/2 << endl ; 
    }
}