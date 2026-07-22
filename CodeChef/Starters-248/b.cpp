#include <bits/stdc++.h>
using namespace std;

string check() {
    vector<int>a(5);
    int case1 = 0 ;
    int case2 = 0 ;
    for(int i = 0 ; i < 5 ; i++) {
        cin >> a[i] ;
    }
    
    for(int i = 0 ; i < 5 ; i++) {
        if(a[i] >= 30 ) {
            case2 += 1;
            if(a[i] >= 60 ) {
                case1 += 1;
            }
        }
    }
    
    if( case2 >= 4 && case1 >= 2) {
        return "Pass" ;
    } 
    else return "Fail" ;
    
}

int main() {
	// your code goes here
	int t ;
	cin >> t ;
	for(int i = 0 ; i < t ; i++ ) {
	    cout << check() << endl ;
	}
}
