#include<bits/stdc++.h>
using namespace std ; 

// MY SOLUTION ,, TC = O(N) SC = O(N)

class Solution {
public:
    bool isPalindrome(string s) {
      string ans ="";
      for(int i = 0 ; i<s.length() ; i++){
      if((s[i]<='z' && s[i]>='a') || (s[i]<='Z' && s[i]>='A')){ 
        if(s[i]<='Z' && s[i]>='A') ans.push_back(s[i]-'A'+'a'); 
        else ans.push_back(s[i]) ; 
        }
        else if (s[i]>='0' && s[i]<='9') ans.push_back(s[i]) ; 
      }
      int j = 0 ; 
      int k = ans.length()-1 ; 
      while(j<=k){
        if(ans[j]!=ans[k]) return false ;
        j++ ;
        k-- ; 
      }  
      return true ; 
    }
};


// OPTIMAL SOLUTION  TC = O(N) SC = O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};



// if (islower(s[i]))
//     ans += toupper(s[i]);
// else if (isupper(s[i]))
//     ans += tolower(s[i]);