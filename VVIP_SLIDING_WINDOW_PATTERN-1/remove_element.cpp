#include<bits/stdc++.h>
using namespace std ; 
// MY SOLUTION - TC = O(N) SC =O(1)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0 ; 
        int j = 0 ;
        while(i<=j && j<nums.size()){
            if(nums[j]!=val) {
                nums[i]=nums[j] ;
                i++;
                j++ ; 
            }
            else{
                j++;
                // if(j<nums.size() && nums[j]!=val) {
                //     nums[i] = nums[j] ;
                //     i++;
                //     j++ ; 
                // }
                // else j++ ; 
            }
        }
        return i ; 
    }
};