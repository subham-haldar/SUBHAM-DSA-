#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    int fib(int n) {
      if(n==0 || n==1) return n ; 
      int a = 0 ; 
      int b = 1 ; 
      int c = 0  ;
      int k = n ; 
      while(k--){
          c = a + b ; 
          a = b ; 
          b = c ; 
      }
      return a ; 
    }
};        // TC = O(N) SC = O(1)