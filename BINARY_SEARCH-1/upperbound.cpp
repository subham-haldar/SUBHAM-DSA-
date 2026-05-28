#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int>nums{1,2,3,3,5,8,8,10};
    int tgt ; 
    cin>>tgt ;
    int low = 0 ; 
    int high = nums.size()-1 ;
    int ans = nums.size() ; 
    while(low<=high) { 
        int mid = (high + low)/2;
        if(nums[mid]>tgt) {
            ans = mid ;
            high = mid - 1 ;
        }
        else if (nums[mid]<tgt) low = mid+1 ; 
    }
    cout<<ans;
    return 0 ; 
}
