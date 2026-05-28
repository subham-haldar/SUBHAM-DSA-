#include<bits/stdc++.h>
using namespace std ; 
class Solution {                // THE LOGIC AND DRY RUN IS SAME AS THAT OF LONGEST SUBARRAY WITH SUM K 
public:
    int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> mpp ;
     mpp[0] = 1 ;
     int presum = 0 ; 
     int count = 0 ;                                   // THIS IS THE OPTIMAL SOLUTION FOR ALL CASES AS WE HAVE TO STORE THE NUMBER OF TIMES A PRESUM OCURING
     for(int i = 0 ; i<nums.size() ; i++){             // IN THE TWO POINTER APPROACH WE WILL GET ONLY THE LENGTH OF SUBARRAY NOT THE COUNT 
        presum = presum + nums[i] ; 
        int left = presum - k ;
        count = count + mpp[left] ;           // WE KEEP ON UPDATING THE HASHMAPS KEY VALUE THUS WE ARE GETTING THE REQUIRED COUNT 
        mpp[presum] += 1 ;  
         }
        return count ; 
    }
};