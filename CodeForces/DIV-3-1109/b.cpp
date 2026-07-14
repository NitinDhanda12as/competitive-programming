#include<bits/stdc++.h>
using namespace std ;

string check( long long hash[] , int n ) {
    long long a[n];
    long long sum = 0 ;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for( int i = 0 ; i < n ; i++) {
        sum = sum + a[i] ;
        if( sum < hash[i] ) {
            return "NO" ;
        }
    }    
    return "YES" ;
}

int main() {
    int t , n ;
    cin >> t ;
    for( int i = 0 ; i < t ; i++ ) {
        cin >> n;
        //hashing
        long long hash[n] = {1} ;
        for(int i = 1 ; i < n ; i++) {
            hash[i] = hash[i-1] + i + 1 ;
        }

        cout << check( hash ,  n ) << endl  ;

    }
} 