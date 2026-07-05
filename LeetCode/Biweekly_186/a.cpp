#include<iostream>
#include <vector>
using namespace std ;

class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n= nums.size();
        int counter = 0 ;
        int mid_num = nums[n/2] ;
        for( int i = 0 ; i < n ; i++ ) {
            if( nums[i] == mid_num ) {
                counter++ ;
            }
        }
        if( counter == 1 ) {
            return true ;
        }else {
            return false ;
        }
    }
}