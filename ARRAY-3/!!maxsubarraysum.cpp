#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int>nums{-2,-3,4,-1,-2,1,5,-3};
    int maxsum =    INT_MIN;  
    // // BRUTE FORCE = 2 for loops (n3 when sum ke liye bhi alag loop banaya) ; 
    for(int i = 0 ; i<nums.size() ; i++){
        int sum = 0 ; 
        for(int j = i ; j<nums.size();j++){
            sum = sum + nums[j];
            maxsum = max(sum,maxsum);
        }
    }
    cout<<maxsum ; 
  
  
    // BETTER SOLUTION (n2 when sum is taken with each iteration)

    //OPTIMALL SOLUTION(KADANES ALGORITHM)
    int SUM = nums[0];
    for(int i = 1 ; i<nums.size();i++){
        if(SUM<0) {
            SUM = 0 ;
        }
        SUM = SUM + nums[i];
        maxsum = max(maxsum,SUM);
    }
    if(maxsum < 0) maxsum = 0 ; 
    cout<<maxsum;
    // !!!! A FOLLOW UP -> PRINT THE SUBARRAY 
    return 0 ; 
}