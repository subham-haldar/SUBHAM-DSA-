#include<bits/stdc++.h>
using namespace std ; 
class Solution {               // the concept is to traverse backwards and where there gets a odd number print upto that portion of string 
public:
    string largestOddNumber(string num) {
        int idx = -1 ;
        for (int i = num.length()-1 ; i>=0 ; i--){
            if(num[i]%2!=0) {
                idx = i ; 
                break ; 
            }
        }
             if(idx==-1) return "";
             string s = "";
             for(int i = 0 ; i<=idx ; i++){
                s.push_back(num[i]);
             }
             return s ;        // TC = O(N) worst case when no digit is odd and SC = O(N) worst case when the total number is odd  
    }
};