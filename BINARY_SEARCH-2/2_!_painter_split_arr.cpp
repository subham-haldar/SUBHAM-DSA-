#include<bits/stdc++.h>
using namespace std ;       // min of max time took to paint the walls 
// Input: arr[] = [5, 10, 30, 20, 15], k = 3
// Output: 35
// Explanation: The optimal allocation of boards among 3 painters is - 
// Painter 1 → [5, 10] → time = 15
// Painter 2 → [30] → time = 30
// Painter 3 → [20, 15] → time = 35
// Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35
class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        long long sum = 0 ; 
        for(int i = 0; i<arr.size();i++){
             sum = sum + arr[i];
        }  
        if(k==1) return sum ; 
        int low = *max_element(arr.begin(),arr.end());
        int high = sum ;
        while(low<=high){
            int mid = low+(high-low)/2;
            int count = 1 ; 
            int load = arr[0];
            for(int i = 1 ; i<arr.size() ; i++){
                if(load+arr[i]<=mid) load = load + arr[i];      // AS I KNOW THAT MAXIMUM IF 1 PAINTER IS THERE THE SUM IS ANS AND MINIMUM TIME IS max element
                                                                // because if 1 painter is assigned to do that job it will minimum take that time 

                  // MY INTUITION IS THAT TAKE A TIME ND CHECK IF THAT IS DONE BY K PAINTERS , if yes move backwards to find minimum time 
                  // if no then move forward 
                else { 
                    count ++ ;
                    load= arr[i];
            }
        }
        if(count<=k) high = mid-1; 
        else low = mid+1 ;          // TC = o(N) * O(LOG(SUM-MAX)) 
      }     
         return low ; 
    }                   /// THIS CONCEPT IS SAME FOR SPLIT ARRAY IN SUCH A WAY THAT the maximum subarray sum is minimum
    // BOOK ALLOCATION + SPLIT ARRRAY + PAINTER == SAME CONCEPT 

};