#include <bits/stdc++.h>
using namespace std;

void growing_days() {
    int N , A ;
    cin >> N ;
    vector<int>v ;
    for(int i = 0 ; i < N ; i++) {
        cin >> A ;
        v.push_back(A) ;
    }
    
    
    int ans = 0 ;
    for (int i = 0; i < N - 1 ; i++) {
        ans = max( ans , min(v[i] , v[i+1]) ) ;
    }
    cout << ans << endl ;
}


int main() {
	// your code goes here
	int T ; 
	cin >> T ; 
	for ( int i = 0 ; i < T ; i++) {
	    growing_days();
	}
	return 0 ;
}



#include <bits/stdc++.h>
using namespace std;

void growing_days() {
    int N, A;
    cin >> N;

    vector<int> v;

    for (int i = 0; i < N; i++) {
        cin >> A;
        v.push_back(A);
    }

    int sz = v.size();

    for (int i = 0; i < sz - 1; i++) {
        v.push_back(min(v[i], v[i + 1]));
    }

    cout << *max_element(v.begin() + sz, v.end()) << endl;
}

int main() {
    int T;
    cin >> T;

    for ( int i = 0 ; i < T ; i++) {
	    growing_days();
	}

    return 0;
}