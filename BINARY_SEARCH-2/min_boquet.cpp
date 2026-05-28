#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m>(bloomDay.size()/k)) return -1 ;
        int n = bloomDay.size();
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid = low + (high-low)/2;
            int c = 0 ;
            int count = 0 ; 
            for(int i = 0 ; i<n;i++){ 
                if(mid>=bloomDay[i]) count = count+1;
                else{
                    c = c+count/k;
                    count = 0 ;
                }
            }
            c = c + count/k ;             //    TC = N * LOG(maxelement-minelement+1)
            if(c>=m) {
                if(ans>mid) ans = mid ;
                high = mid-1;
            }
            else low = mid + 1 ; 
        }
        return ans ; 
    }
};