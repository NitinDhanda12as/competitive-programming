


// wrong solution -> thought that solution depend only on no if 1's.



class Solution {
    int sum_of_string( int n , string str ){
        int x = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            if( str[i] == '1' ) x+=1 ;
        }
        return x ;
    }

    int count( int n , string str ){
        int x = 0 ;
        for(int i = 0 ; i < n ; i++ ){
            if( str[i] == '?' ) x+=1 ;
        }
        return x ;
    }
    
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.size() ;
        int sum_of_s = sum_of_string( n , s);
        vector<bool>ans(strs.size()) ;
        
        for (int i = 0; i < strs.size(); i++) {
            int ones = sum_of_string(n, strs[i]);
            int questions = count(n, strs[i]);

            if (ones == sum_of_s) {
                ans[i] = true;
            } else {
                if (ones < sum_of_s && ones + questions >= sum_of_s) {
                    ans[i] = true;
                } else {
                    ans[i] = false;
                }
            }
        }
        return ans ;
    }
};©leetcode