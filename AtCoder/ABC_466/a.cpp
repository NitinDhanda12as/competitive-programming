#include<iostream>
using namespace std ;

void all_negative( int N) {
    int X ;
    for( int i = 0 ; i < N ; i++) {
        cin >> X ;
        if( X > 0 ) {
            cout << "No" ;
            break;
        }
    }
    cout << "Yes" ;
}
int main() {
    int N ;
    cin >> N ;
    all_negative( N ) ;
}