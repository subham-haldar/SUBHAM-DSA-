#include<bits/stdc++.h>
using namespace std;    // SEARCH IN ROTATED SORTED ARRAY (UNIQUE ELEMENTS)
int main (){
    vector<int>nums{7,8,9,1,2,3,4,5,6};
    int tgt ;
    cin>>tgt ;
    int idx = -1 ; 
    int low = 0 ; 
    int high = nums.size()-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(nums[mid]==tgt) {   // if the element is in the mid
            idx = mid ;
            break;
        }
        if(nums[low]<=nums[mid]){   //  IF LEFT HALF SORTED ; 
           if(nums[low]<=tgt && tgt< nums[mid]) high = mid - 1 ;   // if the tgt is in left half
           else  low = mid + 1 ;   
        }

        else {   // right half is sorted 
         if(nums[mid]<=tgt && tgt<nums[high]) low = mid + 1 ;
         else high = mid - 1 ;
       }
    }
    cout<<idx ; 
    return 0 ; 
}