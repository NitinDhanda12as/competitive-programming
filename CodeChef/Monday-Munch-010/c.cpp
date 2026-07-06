#include <bits/stdc++.h>
using namespace std;

int main() {
    int T , K , N;
    cin >> T;
	while(T--){
	    cin >> K >> N ;
	    vector<int>gem_stones(N , 0);
	    for(int i = 0 ; i < N ; i++) {
	        cin >> gem_stones[i];
	        sort(gem_stones.begin(), gem_stones.end(), greater<int>());
	        
	        if( i < K-1) {
	            cout << "-1 ";
	        }else{
	            cout << gem_stones[K-1] << " "; 
	        }
	    }
	    cout << endl;
	    
	}
	return 0;

}

// got 70% score for it , using priority queue is optimal approach perhaps
