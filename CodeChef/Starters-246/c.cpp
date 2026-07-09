#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for( int i = 1 ; i <= T ; i++) {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        long long total_wait = 0;
        long long entry_time = A[0];

        for (int i = 1; i < N; i++) {
            entry_time = max(entry_time, A[i]);
            total_wait += (entry_time - A[i]);
        }

        cout << total_wait << endl;
    }

    return 0;
}