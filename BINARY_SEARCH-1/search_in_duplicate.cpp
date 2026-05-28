#include<bits/stdc++.h>
using namespace std ; 
int main(){
      vector<int>nums{2,3,3,3,4,5,6,7,0,1};
      int target ; 
      cin>>target ; 
      int low = 0 ; 
      int high = nums.size()-1 ; 
      int c = -1 ; 
      while(low<=high){
        int mid = (high+low)/2 ; 
        if(nums[mid]==target) c = 1 ;  
        if(nums[mid]==nums[low]&& nums[mid]==nums[high]) {
            low = low  + 1 ; 
            high = high - 1 ; 
        }
        else if (nums[low]<=nums[mid]){  // left half sorted 
            if(nums[low]<=target && target<=nums[mid]) high = mid - 1 ; 
            else low = mid + 1 ; 
        }
        else {        // right half sorted 
           if(nums[mid]<=target && target<=nums[high]) low = mid + 1 ;
           else high = mid - 1 ; 
        } 
      } 
       if (c == 1) return true ; 
       return false ;    
       /////// TC = LOG N  , but if there are many duplicates then the worst tc = n/2 as the array will be shrinked to half 
    }
