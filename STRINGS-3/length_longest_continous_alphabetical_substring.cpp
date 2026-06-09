#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int longestContinuousSubstring(string s) {
        if (s.length() == 1) return 1;

        int i = 0;
        int j = 1;
        int maxlen = 1;

        while (j < s.length()) {
            if (s[j] == s[j - 1] + 1) {
                maxlen = max(maxlen, j - i + 1);
            } else {
                i = j;
            }
            j++;
        }

        return maxlen;
    }
};

// MY SOLUTION WITH COMPLEX LOGIC 
class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.length()==1) return 1 ; 
        unordered_map<int,int>mpp;
        mpp[s[0]-'a'] = 0 ; 
        int i = 0 ; 
        int j = 1 ;
        int maxlen = 1 ; 
        while(j<s.length()){
            if(s[j]==s[j-1]+1) {
                maxlen =max(maxlen,j-i+1)  ;
                mpp[s[j]-'a'] = j ;
                j++;
            } 
            else {
               while(i<j){
               mpp.erase(s[i]-'a');
               i++;
               }
               mpp[s[j]-'a'] = j ;
               j++;
            }
        }
        return maxlen ; 
    }
};