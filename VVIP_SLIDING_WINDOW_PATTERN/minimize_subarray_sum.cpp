#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            
            // Expand window by adding current element
            sum += nums[right];

            // Shrink window while condition is satisfied
            while (sum >= target) {
                
                // Update minimum length
                minLen = min(minLen, right - left + 1);

                // Remove left element and move left pointer
                sum -= nums[left];
                left++;
            }
        }

        // If no valid subarray found
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};