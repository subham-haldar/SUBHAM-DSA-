#include<bits/stdc++.h>
          class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0 ; 
        int ans ; 
        int low = 1 ; 
        int high = x ;
        while(low<=high){
            int mid = low + (high-low)/2 ;  // this is done if high and low are off limits 
            if(mid<=(x/mid)) {      // the overflow case is solved by using mid<=x/mid
                 ans = mid ; 
                low = mid + 1 ; 
            } 
            else high = mid - 1 ; 
        }
        return ans ;      // TC = LOG N  
    }
};