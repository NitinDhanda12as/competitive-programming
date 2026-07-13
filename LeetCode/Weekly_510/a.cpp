#include<bits/stdc++.h>
class Solution {
    int time_to_sec( string& time) {
        stringstream ss(time);
        int h = 0 ;
        int m = 0 ;
        int s = 0;
        char colon = ':' ;
        ss >> h >> colon >> m >> colon >> s ;
        return ( (h*60*60) + (m*60) + s ) ;
    }
  public:
    int secondsBetweenTimes(string startTime, string endTime) {
        
        int end = time_to_sec(endTime) ;
        int start = time_to_sec(startTime) ;
        return end - start ;
    }
};