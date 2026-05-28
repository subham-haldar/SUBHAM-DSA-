#include<bits/stdc++.h>
using namespace std;
int main() {          // FOR ARRAY === sizeof(arr) , for vector st.size()
                     // !!!!! BRUTE FORCE = TC(N1*N2) SC = (N2) , WE CONSIDER SIZE OF VISIT ARR AND NOT THE ANS ARRAY 
   int arr1[8]={1,2,2,3,3,4,5,6};       // THE BRUTE FORCE GIVES 2356 , NOT 23356 AS IT SKIPS DUE TO VISS ARRAY CONCEPT 
   int arr2[7]={2,3,3,5,6,6,7};      
   vector<int>visitarr(8,0);     // Size and initialize to avoid out-of-bounds
   vector<int> ans;
      for(int i = 0 ; i< 8 ; i++){
        for (int j = 0 ; j < 7 ; j++){
            if(arr1[i]==arr2[j]&& visitarr[arr1[i]]==0){
                ans.push_back(arr1[i]);
                visitarr[arr1[i]] = 1 ; 
                break;
               }
            if(arr2[j]>arr1[i]) break;
             }
           }
           for(int x : ans) cout<<x;

//!!!!!!!OPTIMAL SOLUTION  TC = O(NLOGN+MLOGM) SC = O(1)
 // THIS GIVE 23356 AS IN INTERSECTION REPEATED CAN COME IF IT IS IN PAIR
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int i = 0 , j = 0 ;
        while(i<nums1.size() && j< nums2.size()) {
            if(nums1[i]<nums2[j]) i++ ; 
            else if(nums1[i]>nums2[j]) j++ ; 
            else {
                if(ans.empty() || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
                }
                i++;
                j++ ;
                }
           }
           return ans;
        } 
};
   return 0 ;
}