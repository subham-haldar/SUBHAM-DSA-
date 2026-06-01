#include<bits/stdc++.h>
using namespace std ; 
// optimal solution 
class Solution {           // TC = O(NLOGN) + O(s[0].length()) ; SC = O(LOG N) recursive stack space for sorting
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());
        int n = strs.size() ; 
        for(int i = 0 ; i<strs[0].length() ; i++){
            if(strs[0][i]!=strs[n-1][i]) return ans ; 
            else ans +=strs[0][i];
        }
        return ans ; 
    }
};


// BRUTE FORCE 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for (int i = 0; i < strs[0].length(); i++) {
            char ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].length() || strs[j][i] != ch) {
                    return ans;
                }
            }

            ans += ch;
        }

        return ans;
    }
};       // TC = O(N*M) where n = length & m = size of shortest string ;;  SC= O(1) excluding output string 