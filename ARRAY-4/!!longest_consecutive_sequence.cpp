// #include<bits/stdc++.h>
// using namespace std;


// ///  BETTER SOLUTION - TC = O (NLONG) + O(N) sc = O(1)
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0) return 0 ; 
//         sort(nums.begin(),nums.end());
//         int current_len = 1;
//         int longest_len = 1 ; 
//         int last_smaller = INT_MIN ; 
//         for(int i = 0 ; i<nums.size() ; i++){
//             if(last_smaller == nums[i]-1) {
//                     current_len +=1 ; 
//                     last_smaller = nums[i];
//             }
//             else if (last_smaller !=nums[i]){
//                 current_len = 1 ;
//                 last_smaller = nums[i];
//             }
//         longest_len = max(longest_len,current_len);
//        }
//     return longest_len ; 
//       }
//    };


// STRIVER SOLUTION   TC = o(n) sc = o(n) worst case 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        // If the array is empty
        if (n == 0) return 0; 
    
        // Initialize the longest sequence length
        int longest = 1; 
        unordered_set<int> st;
    
        // Put all the array elements into the set
        for (int i = 0; i < n; i++) {
            st.insert(a[i]);
        }
    
        /* Traverse the set to 
           find the longest sequence  */
        for (auto it : st) {
            // Check if 'it' is a starting number of a sequence
            if (st.find(it - 1) == st.end()) {
                // Initialize the count of the current sequence
                int cnt = 1; 
                // Starting element of the sequence
                int x = it; 
    
                // Find consecutive numbers in the set
                while (st.find(x + 1) != st.end()) {
                    // Move to the next element in the sequence
                    x = x + 1; 
                    // Increment the count of the sequence
                    cnt = cnt + 1; 
                }
                // Update the longest sequence length
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};

int main() {
    vector<int> a = {100, 4, 200, 1, 3, 2,101,102,103,104,105}; 

    // Create an instance of solution class
    Solution solution; 
    // Function call for finding longest consecutive sequence
    int ans = solution.longestConsecutive(a); 
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}