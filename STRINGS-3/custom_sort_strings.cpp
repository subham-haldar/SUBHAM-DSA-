#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>hash(26,0) ;
        for(int i = 0 ; i<s.length() ; i++){
                hash[s[i]-'a'] ++ ;
        }
        int j = 0 ;
        for(int i = 0 ; i<order.length() ; i++){
            int c = order[i]-'a';
            while(hash[c]!=0 && j<s.length()){
                s[j]=order[i];
                hash[c]-- ; 
                j++;
            }
        }
        for(int k = 0; k < 26; k++) {     // if some elements left to change in place of s then we will use this
            while(hash[k] != 0 && j < s.length()) {
               s[j] = k + 'a';
               hash[k]--;
               j++;
              }
           }
        return s ; 
    }
};