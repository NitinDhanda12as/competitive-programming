class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size() ;
        int count = 0 ;
        for(int i = 0 ; i < n ; i++ ) {
            if( s[i] == x ) {
                s.erase(i, 1);         
                s.push_back(x); 
                count++ ;
                if( count <= n) i-- ;
            }
        }
        return s;
    }
}
