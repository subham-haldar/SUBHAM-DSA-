#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{2,4,3,3,3,3,3,1,2,2}; // majority elemnet should appear >n/2 (n = nums.size())
    // |||||| BRUTE FORCE APPROACH ( 2 for loops , if count of a element becomes more than n/2 return it) 

    // |||||||| BETTER APPROACH (USE HASHMAPS) 
//     class Solution {
//     public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<long long , int>mpp;
//         for(int i = 0 ; i<nums.size() ; i++){
//             mpp[nums[i]]++;
//         }
//         for(auto& [number , freq] : mpp){
//             if(2*freq>nums.size()) return number ; 
//         }
//         return -1 ; 
//     }
// };


// OPTIMAL SOLUTION ( MOORES VOTING)
int count = 0 ; 
int el = nums[0];
for(int i = 0 ; i<nums.size() ;i++){
    if(count==0){
         el=nums[i];
         count = 1 ; 
    }
    if(nums[i]==el) count++;
    if(nums[i]!=el) count--;
}
cout<<el; // if it is given that majority element is always there then (el) is 
         //the ans else do the count of el in the array , if it is !>n/2 return -1
    
    return 0 ;
}