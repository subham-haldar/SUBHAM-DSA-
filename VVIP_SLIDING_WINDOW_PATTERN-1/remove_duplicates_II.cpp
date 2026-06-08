#include<bits/stdc++.h>
using namespace std ; 
// MY SOLUTION - TC = O(N) , SC= O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  i = 1 ; 
        int j =  1 ; 
        int count  = 1  ; 
        while(i<=j && j<nums.size()){
            if(nums[j]==nums[j-1]) {
              count ++;
              if(count<3) {
                nums[i]=nums[j];
                i++;
                j++;
              }
              else j++; 
            }
            else{
                count = 1 ;
                nums[i] = nums[j] ;
                i++ ;
                j++ ; 
            }
        } 
        return i ; 
    }
};