#include<bits/stdc++.h>
using namespace std ;

string obese( float BMI ) {
    if( BMI < 25 ) return "No" ;
    return "Yes" ;
}

int main() {
    float H , W ;
    cin >> H >> W ;
    float BMI = W / ((H/100.0)*(H/100.0));
    cout << obese( BMI ) ;

}