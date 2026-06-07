#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mpp;
        mpp[0] = 1 ; 
        int sum = 0 ;
        int count  = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            sum = sum + nums[i] ;  
            int rem = sum - goal ; 
            if(mpp.find(rem)!=mpp.end()) {
                count = count + mpp[rem] ;
            }
            mpp[sum] += 1 ; 
        }
        return count ; 
    }
};