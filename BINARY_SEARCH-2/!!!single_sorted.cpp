#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int>nums{1,1,2,2,3,3,4,5,5,6,6,7,7,8,8};
   // IN O(N) TC 
   if(nums.size()==1) return nums[0] ; 
   for(int i = 0 ; i<nums.size() ; i++){
    if(i == 0) {
             if(nums[i]!=nums[i+1]) return nums[i] ; 
    }
    else if (i == nums.size()-1){
             if(nums[i]!=nums[i-1]) return nums[i] ; 
    }
    else {
         if(nums[i]!=nums[i+1] && nums[i]!= nums[i-1]) return nums[i];
    }
   }
   /// NOW THE OPTIMISED BINARY SEARCH CODE 
   // the intuition {binary search eliminates the half }
   if(nums.size()==1) return nums[0];
   if(nums[0]!=nums[1]) return nums[0] ; 
   if(nums[nums.size()-1]!=nums[nums.size()-2]) return nums[nums.size()-1] ;
   int low = 1 ; 
   int high = nums.size()-2 ; 
   while(low<=high){
    int mid = (high + low)/2; 
      if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid]; 
      else if ((mid%2 == 0 && nums[mid]==nums[mid+1]) ||(mid%2!=0 && nums[mid-1]==nums[mid]) ){
         low = mid + 1 ; 
      }
      else high = mid - 1 ; 
   }
   return 0 ;
}