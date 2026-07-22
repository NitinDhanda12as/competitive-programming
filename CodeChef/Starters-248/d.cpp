#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> nonZero;
        int zero = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 0)
                zero++;
            else
                nonZero.push_back(x);
        }

        while (zero--)
            cout << 0 << " ";

        for (int x : nonZero)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}