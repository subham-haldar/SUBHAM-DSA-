#include<bits/stdc++.h>
using namespace std ; 
//  A continuous subarray is called nice if there are k odd numbers on it.
// to calculate it if we make all the odd number 1 and all even  number 0 , then the question will turn into the number of subarray with sum k 
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {    
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]%2==0) nums[i]=0;  
            else nums[i] = 1 ;
        }
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int sum = 0 ;
        int count = 0 ;
        for(int i = 0 ; i<nums.size();i++){
             sum = sum + nums[i] ;
             int rem = sum - k ;
             if(mpp.find(rem)!=mpp.end()) count += mpp[rem] ;
             mpp[sum] += 1;
        }
        return count ; 
    }
};