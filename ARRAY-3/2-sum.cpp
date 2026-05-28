#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{4,6,5,8,10};
    int target = 14 ; 
    // BRUTE FORCE 2 for loops  tc = 0(n*n)
    for(int i = 0 ; i<nums.size() ; i++){
        for(int j = i+1 ; j<nums.size() ; j++){
            if(nums[i]+nums[j]==target) cout<<i<<" "<<j<<endl;
        }
    }
  
     // BETTER SOLUTION USING HASHMAPS tc = o(n) sc = o(n) when not sorted 
     unordered_map<int,int>mpp;
     for(int i = 0 ; i<nums.size() ; i++){
        int rem = target-nums[i];
        if(mpp.find(rem)!=mpp.end()){
            cout<<i<<" "<<mpp[rem]<<endl;
        }
         mpp[nums[i]] = i ; // insert at last cause i have to find the element in the next step 
     }

     // OPTIMAL SOLUTION (2 POINTER) do sorting 
     sort(nums.begin(),nums.end()); // i am changing the array  so the sc can be 0(n)
     int i = 0 , j = nums.size()-1;
     while(i<j) {
        if(nums[i]+nums[j]<target) i++;
        else if(nums[i]+nums[j]>target) j--;
        else {
             cout<<i<<" "<<j<<endl ; 
             i++ ; 
             j--;
        }
     }


    return 0 ; 
}