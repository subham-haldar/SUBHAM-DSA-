#include<bits/stdc++.h>
using namespace std ; 

// OPTIMAL SOLUTION , TC - O(N*N)  SC = O(2n) storing ans and storing in words 
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = s.substr(0,1);
        if(s.length()<2) return s ; 
        for(int i =1 ; i<s.length(); i++){


        // odd length palindromic substring 
        int left = i ; 
        int right = i ; 
        while(s[left]==s[right]) {
            left-- ; 
            right++ ;
            if(left==-1 || right==s.length()) break ; // check for boundary condition 
        }
        // extract the substring
        string word = s.substr(left+1,right-left-1) ; 
        if(word.length()>ans.length()) ans = word ; 


           // even length string 
            left = i-1 ; 
            right =  i ; 
           while(s[left]==s[right]) {
            left--;
            right++ ; 
            if(left==-1 || right == s.length()) break ; 
           }
           string len = s.substr(left+1,right-left-1) ; 
            if(len.length() >ans.length() ) ans = len ; 
       }
       return ans ; 
      
    }
};

// BRUTE FORCE , TC = O(N*N*N)  SC = O(2n)
// generate all substring and compare for palindrome
class solution {
public:
bool isPalindrome(string str) { 
    int l = 0;
    int r = str.length() - 1;

    while(l < r) {
        if(str[l] != str[r])
            return false;

        l++;
        r--;
    }

    return true;
}

string longestpalindromicsubstring(string s){
string ans = "";

for(int i = 0; i < s.length(); i++) {
    for(int j = i; j < s.length(); j++) {

        string sub = s.substr(i, j - i + 1);

        if(isPalindrome(sub) && sub.length() > ans.length()) {
            ans = sub;
        }
    }
   }
 }
};