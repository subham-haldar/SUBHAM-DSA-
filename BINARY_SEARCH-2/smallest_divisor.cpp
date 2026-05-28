#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
       int ans = *max_element(nums.begin(),nums.end());
       int low = 1;
       int high = *max_element(nums.begin(),nums.end());
       while(low<=high){
        int mid = low+(high-low)/2;
        int c = 0 ; 
        for(int i = 0 ; i<nums.size() ; i++){
            c += (nums[i] + mid - 1) / mid;       // FORMULA FOR CEIL VALUE 
        }
        if(c<=threshold){
             ans = min(ans,mid);
             high = mid-1;
         }
         else low = mid + 1 ; 
       }
       return ans ;           // TC = O(N*LOG(MAX ELEMENT OF NUMS))
    }
};