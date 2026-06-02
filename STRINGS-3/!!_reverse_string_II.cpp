#include<bits/stdc++.h>
using namespace std ;     // OPTIMAL SOLUTION  , TC = O(N/2k) number of times loop runs * O(k) time for reversing  characters 
class Solution {                                  // SC = O(1) in place changes 
public: 
    string reverseStr(string s, int k) {
        int n=s.size();
        int i=0;
        while(i<n){
            int end = min(i+k,n); // check if after i+k does its <= n 
            reverse(s.begin()+i,s.begin() + end);     // reverse(s.begin(),s.end()) , starts from s.begin() , but goes upto s.end()-1 
            i=i+ 2*k;                                // s.end() points at i==s.length() ;
        }              
        return s;
    }
};

// see the logic is check if after the i th element , 
// k elements accour or not , if yes take them in acoount else reverse till end and
// after updating the i , it will not fulfill the condition of loop


// I ACTUALLY REMOVED THE CONCEPT OF >K , <2K 
// i just said i have to reverse k elements then move to i+k and do the same untill i cant have more k elements after i 