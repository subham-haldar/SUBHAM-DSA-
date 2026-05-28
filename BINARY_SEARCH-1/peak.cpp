#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>nums{1,2,3,7,5,6,7,8,5,1,};
    if(nums.size()==1) return nums[0];
    if(nums[0]>nums[1]) return nums[0];
    if(nums[nums.size()-1]>nums[nums.size()-2]) return nums[nums.size()-2];
    int low = 1 ;
    int high = nums.size()-2 ; 
    while(low<=high){
        int mid = (low+high)/2 ; 
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
        cout<<nums[mid];     
        break;      
        }
        else if(nums[mid]<nums[mid+1]){
               low = mid + 1 ;             
        }
        else if ( nums[mid]>nums[mid+1]){
            high = mid - 1 ; 
        }
        else low = mid +1 ;  // TC = LOG N 
      }

   return 0 ;
}