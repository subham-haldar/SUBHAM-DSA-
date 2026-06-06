#include<bits/stdc++.h>
using namespace std ; 

// BRUTE FORCE = TC = O(N*N) SC = O(1) 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0 ; 
        int len  = 0 ; 
        for(int i = 0 ; i<s.length() ; i++){
             vector<int>hash(256,0);
            for(int j = i ; j<s.length() ; j++){
                if(hash[s[j]]==1){
                    len = j-i;             // the jth element here is the repeated thus will not be included in length
                    maxlen = max(len,maxlen) ; 
                    break ;
                }  
                len = j-i+1 ; 
                maxlen = max(maxlen,len);
                hash[s[j]] = 1 ; 
            }
        }
        return maxlen ; 
    }
};

// OPTIMAL SOLUTION TC = O(n) SC=O(1) 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0 ; 
        int maxlen = 0 ; 

        if(s.length()==0) return 0 ; 
        else if(s.length()==1) return 1 ; 

        int l = 0 ;
        int r = l+1 ;
        unordered_map<char,int>mpp ;
        mpp[s[l]] = l ; 
        while(l<=r && r < s.length() ){
            if(mpp.find(s[r])!=mpp.end()){
                if(mpp[s[r]]>=l) { 
                 l = mpp[s[r]] + 1 ; 
                 len = r -l + 1  ;
                 maxlen = max(maxlen,len) ;
                 mpp[s[r]]=r ;
                }
                else{
                mpp[s[r]] = r ; 
                len = r-l+1;
                maxlen = max(maxlen,len);
                }
            }
            else {
                mpp[s[r]] = r ;
                len = r-l+1; 
                maxlen = max(maxlen,len);
            }
            r++;
        }
        return maxlen ;
    }
};


// a more cleaner version is below 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxlen = 0;
        unordered_map<char, int> mpp;

        for (int r = 0; r < s.length(); r++) {

            if (mpp.find(s[r]) != mpp.end() && mpp[s[r]] >= l) {
                l = mpp[s[r]] + 1;
            }

            mpp[s[r]] = r;
            maxlen = max(maxlen, r - l + 1);
        }

        return maxlen;
    }
};

