#include<bits/stdc++.h>
using namespace std ; 
int main(){
   vector<int>nums{6,3,4,2,1,1};
   int rep = -1 ; 
   int miss = -1 ;
   for(int i = 1 ; i<=6 ; i++){
    int count = 0 ;
    for(int j = 0 ; j<nums.size();j++){
        if(nums[j]==i) count ++ ;
    }
    if(count == 2) rep = i ;
    else if (count == 0) miss = i ;
    if(rep !=-1 && miss !=-1) break ; 
   }
   cout<<miss<<" "<<rep ;
    return 0 ; 
} 