#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int>nums{0,1,2,0,1,2,1,2,0,0,0,1};
    // BRUTE FORCE IS sort the array directly ; 
    sort(nums.begin(),nums.end()); // if i use merge sort tc = nlogn and sc = n 
   // BETTER SOLUTION = TC = (2N) SC = (1)
   int c0 = 0 , c1 = 0 , c2 = 0 ;
   vector<int>ans; // i can do a solution so that i dont have to use this extra array 
   for(int i = 0 ; i<nums.size() ; i++){
    if(nums[i]==0) c0 +=1;
    if(nums[i]==1) c1 +=1;
    if(nums[i]==2) c2 +=1 ; 
   }
   while(c0!=0){
    ans.push_back(0);
    c0--;
   }
   while(c1!=0){
    ans.push_back(1);
    c1--;
   }
   while(c2!=0){
    ans.push_back(2);
    c2--;
   }
   for(int i = 0 ; i<ans.size() ; i++){
    cout<<ans[i];
   }
   // OPTIMAL SOLUTION TC = N , SC = 1 ||| DUTCH FLAG ALGORITHM !!! 3 POINTER 
   int low = 0  , mid = 0 , high = nums.size()-1;
   while(mid<=high) {
    if(nums[mid]==0 && mid<=high) {
        swap(nums[mid],nums[low]);
        low++;
        mid++;
    }
    else if(nums[mid]==1 && mid<=high) mid++;
    else if(nums[mid]==2 && mid<=high) {
        swap(nums[mid],nums[high]);
        high--;
    }
   } 
   for(int i = 0 ; i<nums.size();i++){
    cout<<nums[i];
   }
    return 0 ;
}