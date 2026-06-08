#include<bits/stdc++.h>
using namespace std ; 
// MY SOLUTION TC = O(2N) SC = O(1)
class Solution {
public:
    int totalFruit(vector<int>& n) {
        unordered_map<int,int>mpp ;
        int maxlen = 0 ;  
        int i = 0 ; 
        int j = 0 ; 
        while(j<n.size()){
                mpp[n[j]] +=1 ; 

                while(mpp.size()>2){
                    mpp[n[i]] -=1 ;
                    if(mpp[n[i]] == 0) mpp.erase(n[i]) ;   
                     i++ ;
                    }

                maxlen = max(maxlen , j-i+1) ;
                j++ ; 
        }
        return maxlen ; 
    }
};

// a more clean version TC = O(N) SC = O(1)
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp ;
        int maxlen = 0 ;  
        int i = 0 ; 
        int j = 0 ; 
        while(j<fruits.size()){
                mpp[fruits[j]] +=1 ; 

                if(mpp.size()<=2) {
                    maxlen = max(maxlen , j-i+1) ;
                }

                else {
                    mpp[fruits[i]] -=1 ; 
                    if(mpp[fruits[i]]==0) mpp.erase(fruits[i]) ; 
                    i++ ; 
                } 
                j++;
        }
        return maxlen ; 
    }
};