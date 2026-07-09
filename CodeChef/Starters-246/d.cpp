#include <bits/stdc++.h>
using namespace std;

void sent_off() {
    int R , Y ;
    cin >> R >> Y ;
    
    if (Y > R) {
        cout << R + (Y - R) / 2 << endl;
    }else {
        cout << R << endl;
    }
}


int main() {
    int T;
    cin >> T;

    for ( int i = 0 ; i < T ; i++) {
	    sent_off();
	}

    return 0;
}