#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long sum = 0 ;
        int result  = 0 ; 
        unordered_map<long long , int > mpp ; 
        mpp[0] = 1 ;
        for(int i = 0 ; i<nums.size() ; i++){
            sum = sum + nums[i] ; 
            int rem = sum % k ; 
            if(rem<0) rem = rem +  k ; // convert negative remainder into positive by adding k 
            if(mpp.find(rem)!=mpp.end()) {
                result += mpp[rem] ;
                mpp[rem] +=1 ; 
            }
            else {
                mpp[rem] +=1 ; 
            }
        }
        return result ; 
    }
};