#include<bits/stdc++.h>
using namespace std ; 
// MY SOLUTION - TC = O(2N) SC = O(N)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>nums;
        nums.push_back(-1);        // -1 will always be there 
        int num = -1 ; 
        int n = arr.size();
        if(arr.size()==1) return nums ;     // if the size of the array is 1 return [-1]
        for(int i = n-1 ; i>0 ; i--){    // we are going to i=1 cause only the max right element matters 
            if(arr[i]>num) {
                nums.push_back(arr[i]);                                // check for the max element in the right and update it accordingly 
                num = arr[i] ;
            } 
            else nums.push_back(num);
        }
        reverse(nums.begin(),nums.end()) ; 
        return nums ; 
    }
};


// optimal SOLUTION - TC = O(N) and SC = O(1)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        int maxRight = -1;

        for(int i = n - 1; i >= 0; i--) {

            int current = arr[i];

            arr[i] = maxRight;

            maxRight = max(maxRight, current);
        }

        return arr;
    }
};
