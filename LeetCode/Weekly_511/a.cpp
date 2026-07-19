class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int even_or_odd = ( start[0] + start[1] ) % 2 ;

        if( (target[0] + target[1]) % 2 == even_or_odd )return 1 ;
            return 0 ;
    }
}