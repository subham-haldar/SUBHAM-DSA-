#include<bits/stdc++.h>
using namespace std ; 
//  GENERAL SOLUTION SC = O(26) TC = O(N+N)*26
class Solution {
public:
    int characterReplacement(string s, int k) {
       int i = 0 ; 
       int j = 0 ; 
       int maxlen = 0 ; 
       int maxfreq = 0 ;
       vector<int>hash(26,0);
       while(j<s.length()) {
           hash[s[j]-'A'] ++ ; // update the frequency 
           maxfreq = max(maxfreq,hash[s[j]-'A']);  // update the maxfreq 
          // to check if it is valid
            while(j-i+1 - maxfreq >k){   // the condition 
            hash[s[i]-'A'] -- ;
            maxfreq = 0 ;
            for(int i = 0 ; i<26 ; i++){
                maxfreq = max(maxfreq,hash[i]) ; 
            }
            i++ ;
            } // after the loop is finished the len-maxfreq definitely be <=k
            if(j-i+1 - maxfreq <=k) maxlen = max(maxlen,j-i+1) ; 
            j++ ;
       }
       return maxlen ;  
    }
};

// dont change the maxfreq , i need a maxlen of maxlen + 1  ;
// keep that window and where that satisfies the condition update the maxlen

// thus change the structure as 

// if(j-i+1 - maxfreq > k) {
//   hash[s[i]] -- ; 
//    i++ ; 
// }