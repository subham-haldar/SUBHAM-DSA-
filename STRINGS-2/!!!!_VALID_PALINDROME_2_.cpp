#include<bits/stdc++.h>
using namespace std ; 
class solution {         // OPTIMAL SOLUTION   TC = O(N)  SC = O(N) because new strings created 
public :                 // BRUTE FORCE SOLUTION - REMOVE EVERY ELEMENT AND CHECK IF THERE IS PALINDROME , TC = O(N*N)
    bool validpalindrome(string s) {
        int l = 0 ; 
        int r = s.length()-1 ; 
        while(l<r){
            if(s[l]!=s[r]) return false ;
            l++ ; 
            r-- ; 
        }
        return true ; 
    }

    bool isplaindrome(string s){ // return {value 1 , value 2} ; 
    int i = 0 ; 
    int j = s.length()-1 ; 
    while(i<j){
        if(s[i]!=s[j]) {
           string s1 = s.substr(0,i) + s.substr(i+1) ; // skip the i pointer
           string s2 = s.substr(0,j) + s.substr(j+1) ; // skip the j pointer
           return validpalindrome(s1) || validpalindrome(s2) ;
        }
        i++ ; 
        j-- ; 
     }
     return true ; 
    }
} ;