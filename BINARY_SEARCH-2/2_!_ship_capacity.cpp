#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        
        int sum = 0;
        int mx = 0;
        for(int i = 0; i < n; i++){
            sum += weights[i];
            mx = max(mx, weights[i]);
        }

        int ans = sum;
        int low = mx;     // max element  such that nums.size() days will take    // FIXED
        int high = sum;   // the net sum such that only 1 day will be taken 

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            int count = 1;     // start with first day
            int c = 0;         // current load

            for(int i = 0; i < n; i++){
                if(c + weights[i] > mid){   // FIXED LOGIC
                    count++;
                    c = weights[i];
                } else {
                    c += weights[i];
                }
            }

            if(count <= days){   // FIXED CONDITION
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
 // THE BASIC INTUITION IS THAT TAKE THE SEARCH SPACE BETWEEN THE CAPACITY AND CHECK THE DAYS   for each capacity 
 // we have to find the minimum weight capacity for which if my mid = = ans then i will prefer some lower weight so low = mid-1
        return ans;
    }
};