#include<bits/stdc++.h>
using namespace std ; 

int main() {
    int n , m , c , s ;
    cin >> n >> m ;
    multimap< int , int>mp ;
    for( int i = 1 ; i <= n ; i++) {
        cin >> c >> s ;
        mp.insert( {c , s}) ;
    }

    int maxx = 0 ;
    for( int i = 1 ; i <= m ; i++)  {
        maxx = 0;
        for( auto x : mp ) {
            if( x.first == i ) {
                maxx = max( maxx , x.second ) ;
            }
        }
        if( maxx > 0 ) {
            cout << maxx << " " ;
        }else cout << "-1 " ;
        
    }
}