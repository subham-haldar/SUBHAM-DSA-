#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:       // THINK LIKE A CHECKLIST where in s you have to complete it in order 
             // untill you do not match s[i] & s[j] move j forward 
    bool isSubsequence(string s, string t) {
           int i = 0 ; 
           int j = 0 ; 
           while(i<s.length() && j<t.length()){
             if(s[i]==t[j]) i++ ;
             j++   ;
           }
           if(i==s.length()) return true ; 
           return false ; 
    } 
};