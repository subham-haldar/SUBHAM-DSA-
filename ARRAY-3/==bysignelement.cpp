#include<bits/stdc++.h>
using namespace std ; 
int main(){
    vector<int>nums{3,1,-2,-5,2,-4};
    // !!!! OPTIMAL APPROACH = (SC-> N ; TC-> N)
    vector<int>ans(nums.size());
    int i = 0 , j = 1 ; 
    for(int k = 0 ; k<nums.size() ; k++){
        if(nums[k]>0){
             ans[i] = nums[k] ;
             i+=2;
        }
        else {
            ans[j]=nums[k];
            j+=2;
        }
    }
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }


    // BRUTE FORCE WILL BE THE ONE TAKING N + n/2 TC where we would store pos and neg in 2 diff arrays 

    return 0 ; 
}