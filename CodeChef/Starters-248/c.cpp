#include<bits/stdc++.h>
using namespace std;

double average(vector<int>& a, int start, int n) {
    long long sum = 0;

    for (int i = start; i < n; i++) {
        sum += a[i];
    }

    return (double)sum / (n - start);
}

int minimum_length(vector<int>& a) {

    sort(a.begin(), a.end());

    int n = a.size();
    int i = 0;

    while (i < n) {

        double avg = average(a, i, n);

        if (a[i] < avg) {
            i++;
        }
        else {
            break;
        }
    }

    return n - i;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << minimum_length(a) << endl;
    }
}