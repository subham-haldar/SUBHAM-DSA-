#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int>nums = {17,18,5,4,6,1};
   vector<int>ans;
   int n = nums.size();
   int maxright = -1 ; 
   for(int i=n-1 ; i>=0 ; i-- ){
    if(nums[i]>maxright){
    ans.push_back(nums[i]);
    maxright = nums[i] ; 
    }
   }
   for(int x : ans){
    cout<<x<<" ";
   }
   return 0 ;          // TC = O(N) worst case sc = o(n) if every element is a leader , ex = 5 4 3 2 1 
}