#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:                                                    // SC = O(2N) worst case in case of unique mapping of every element
    bool isIsomorphic(string s, string t) {                // and TIME COMPLEXITY = O(N) 
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            // If mapping already exists, verify it
            if (mp1.find(c1) != mp1.end()) {  // c1 is the key 
                if (mp1[c1] != c2)             // c2 is the value 
                    return false;
            }
            else {
                mp1[c1] = c2;
            }

            // Check reverse mapping as well
            if (mp2.find(c2) != mp2.end()) {
                if (mp2[c2] != c1)
                    return false;
            }
            else {
                mp2[c2] = c1;
            }
        }

        return true;
    }
};