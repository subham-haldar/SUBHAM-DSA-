#include<bits/stdc++.h>
using namespace std ; 

// BRUTE FORCE 
// TC = O(2 N LOG N) + O(N)  SC = O(2 LOGN) , the recursive space to function call stack
class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.length()!=t.length()) return false ; 
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     for(int i = 0 ; i<s.length() ; i++){
        if(s[i]!=t[i]) return false ;
     }
     return true ; 
    }
};



// OPTIMAL SOLUTION 
// TC = O(2N) and worst case SC =O(2N) when two strings have all unique characters
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false ; 
        unordered_map<char,int>S;
        unordered_map<char,int>T;
       
        int i = 0 ;
        while(i<s.length()){
            S[s[i]] +=1 ;
            T[t[i]] +=1 ; 
            i++ ; 
        }

        for(int i = 0 ; i<s.length() ; i++){
            if(S[s[i]]!=T[s[i]]) return false ; 
        } 
        return true ; 
    }
};