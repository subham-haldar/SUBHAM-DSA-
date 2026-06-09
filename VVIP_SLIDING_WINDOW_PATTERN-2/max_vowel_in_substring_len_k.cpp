#include<bits/stdc++.h>
using namespace std ; 

// TC = O(N) SC=O(1)
class Solution {
public:
    int vowels(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return 1 ;
        return -1 ; 
    }
    int maxVowels(string s, int k) {
       int maxvowel = 0 ;
       int vowel = 0 ;
       int i = 0 ; 
       int j = 0 ; 
       while(j<s.length()){
        if(vowels(s[j])==1) {
            vowel ++;
        }
        if(j-i+1 > k ) {  // when the window exceeds k , just remove the leftmost element 
            if(vowels(s[i])==1) vowel--;
            i++ ;
        }
         maxvowel = max(maxvowel,vowel) ;
         j++;
       }
        return maxvowel ;     
    }
};