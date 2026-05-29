#include<bits/stdc++.h>
using namespace std; 

int main(){
    vector<int> arr{1, 2, 3, 1, 1, 1, 1, 4, 2, 3}; // only positive inputs 
    // BRUTE FORCE (2 for loops) O(N*N)
    int k = 3;
    int length = 0; 

    for(int i = 0; i < arr.size(); i++){
        int sum = 0; 
        for(int j = i; j < arr.size(); j++){
            sum = sum + arr[j]; 
            
            if(sum == k) {
                // Update length if the current subarray is longer
                length = max(length, j - i + 1);
                // the next element could keep the sum at k and increase length.
            }
            else if(sum > k) {
                // Since all inputs are positive, once we exceed k, 
                // we can safely stop this inner loop.
                break; 
            }
        } 
    }
    cout << length;

    ////// BETTER (USING MAP) TC = O(N*LOGN) SC = O(N)
     map<long long,int>presumap;
     long long sum = 0 ; 
     int maxlen = 0 ; 
     for(int i = 0 ; i<arr.size() ;i++){ 
        sum = sum+arr[i];
        if(sum==k) {
            maxlen = max(maxlen , i+1);  // if from start it gives me sum == k i will store it in the hashmap
               }
        int rem = sum-k ;  // I get that remaining part 
        if(presumap.find(rem)!=presumap.end()){ // if i found my rem in hashmap 
                int len = i - presumap[rem];
                maxlen = max(maxlen , len);
               }
              if(presumap.find(sum)==presumap.end()){ // in case of zeroes in the array dont update in hashmap
                 presumap[sum] = i ; 
               } // i compute the sum of each iteration into the map ; 
     }   // i store the sum at the last step because i wil compare last iterated sum in the current iteration 

     cout<<maxlen;

    // |||| OPTIMAL SOLUTION by 2 pointer , ONLY FOR POSITIVES AND ZEROES 
    vector<int>nums{1,2,3,1,1,1,1,3,3};
    int target = 6 ;
    int maxlen = 0 ; 
    long long sum = nums[0] ; // i start my sum with the first element 
    int i = 0 , j = 0 ; 
    while(i<nums.size()){
         while(j<=i && sum>target) {
            sum = sum - nums[j];
            j++;
           }
           if(sum==target) maxlen = max(maxlen,i-j+1);
           i++ ;
          if(i<nums.size()) sum = sum+nums[i];
    }
    cout<<maxlen ; 
    return 0;
}