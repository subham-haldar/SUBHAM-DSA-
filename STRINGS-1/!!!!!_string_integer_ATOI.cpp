#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
    int myAtoi(string s) {
       int sign = 1 ; 
       int idx = 0 ; 
       long long  num = 0 ; 
    // first ignore the initial spaces 
    while(idx<s.length() && s[idx]== ' ') {     // always check that the idx doesnt exceeds s.length 
        idx+=1 ;  
    }
       // now check the sign after the initial spaces 
       if(idx<s.length()  && (s[idx]=='-' || s[idx]=='+')) {
          if(s[idx]=='-') sign = -1 ;
          idx +=1 ;
       }
       while(idx < s.length() && s[idx]>='0' && s[idx]<='9') {      // check for the letter is either bethween 0 and 9
          // append the digits to make the number 
        num = num * 10 + (s[idx]-'0') ;  // this s[idx]-'0' stores the actual value 
         // check the overflow case 
        if(num > INT_MAX) {
            if(sign == 1 ) return INT_MAX;
            return INT_MIN;
         }
         idx+=1;
       }
       return sign * num ;                         // TC = O(N) SC = O(1)
    }
};