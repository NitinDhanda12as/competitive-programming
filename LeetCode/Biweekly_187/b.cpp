class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long half = n / 2;
        long long maxx = s + half * 1LL * m - (half - 1);
        if( n == 1 ) return s ;
        return maxx; 
    }
}