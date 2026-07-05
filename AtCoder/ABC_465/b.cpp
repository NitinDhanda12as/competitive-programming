#include<iostream>
using namespace std ;


int parking_fee(int X , int Y , int L , int R , int A , int B ) {
    if( ( L-A >= 0 && L-B >= 0 && R-A >= 0 && R-B >= 0) || ( L-A <= 0 && L-B <= 0 && R-A <= 0 && R-B <= 0) ) {
        return ( Y*(B-A) ) ;
    }
    else if( ( R-A >= 0 && R-B >= 0 ) && ( L-A <= 0 && L-B <= 0 ) ) {
        return ( X*(B-A) ) ;
    }
    else if( ( L-A > 0 && R-A > 0 ) && ( L-B < 0 && R-B < 0 ) ) {
        return  ( ( R-L )*X + ( ( B-A ) - ( R - L ) )*Y );
    }
    else if  ( L-A > 0 && R-A > 0 ) {
        return  ((B-L)*X + (L-A)*Y) ;
    }else {
        return ((R-A)*X + (B-R)*Y) ;
    }
}

int main() {
    int X , Y , L , R , A , B ;
    cin >> X >> Y >> L >> R >> A >> B ;
    cout << parking_fee( X , Y , L , R , A , B ) ;
    return 0 ;
}