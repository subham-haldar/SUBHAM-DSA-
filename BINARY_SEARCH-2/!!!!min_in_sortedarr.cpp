#include<bits/stdc++.h>
using namespace std ; 
int main(){               // UNIQUE ELEMENTS (do it for duplicate as well)
     vector<int>nums{4,4,5,6,0,0,1,2,2};
     int ans = INT_MAX; 
     int low = 0 ; 
     int high = nums.size()-1;
     while(low<=high){
        if(nums[low]<=nums[high]) { // the search space is sorted 
               ans = min(ans,nums[low]);
               break ; 
        }
        int mid = (low + high)/2; 
        if(nums[low]<=nums[mid]){  // if left half sorted 
            if(nums[low]<ans) ans = nums[low];
            low = mid + 1 ; 
        } 
        else { // if right half sorted 
            if(nums[mid]<ans) ans = nums[mid] ; 
            high = mid - 1 ;  
        }
     }
     cout<<ans ;  // TC = LOG(N)              THE FOLLOW UP FOR THIS IS HOW MANY TIMES THE ARRAY IS SORTED , THE ANS IS THE INDEX OF THE MIN ELEMENT (do the same for duplicate )
    return 0 ; 
}

