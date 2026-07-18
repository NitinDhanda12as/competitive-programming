// didnt sumbit , just thought of brute force
// which means the code below is not optimal or not even correct .



#include<bits/stdc++.h> 
using namespace std;

int main() {

    int n , m ;
    cin >> n >> m ;
    vector<int>a(n);
    vector<int>b(n-1);

    for(int i = 0 ; i < n ; i++ ) {
        cin >> a[i] ;
    }

    for(int i = 0 ; i < n-1 ; i++ ) {
        cin >> b[i] ;
    }

    int i = 0 ;
    int count = 0 ;
    while( i < n-2 ) {
        if( ( a[i] + a[i+1] ) % m == b[i] ) {
            i++ ;
        }else if( i == 0 ) {
            if( ( a[i+1] + a[i+2] ) % m == b[i+1] ) {
                a[i] += 1 ;
                count++ ;
            }
        else {
            a[i+1] += 1 ;
            count++ ;
        }
        }
    }
    cout << count ;
}