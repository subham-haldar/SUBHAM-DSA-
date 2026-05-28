#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,-4,-5,3,6,-3,-2,1,1,5,6,5,2};
    vector<int>pos;
    vector<int>neg;
    int n = nums.size() ; 
    for(int i = 0 ; i<n ; i++){
      if(nums[i]>0) pos.push_back(nums[i]);
      else neg.push_back(nums[i]);
     }
    if(pos.size() > neg.size()){
      for(int i = 0 ; i<neg.size() ; i++){
         nums[2*i] = pos[i];
         nums[2*i+1] = neg[i];
      }
      int index = neg.size()*2 ; 
      for(int i = neg.size() ; i<pos.size() ; i++){
         nums[index]=nums[i];
         index++;
      }
    }
    else{
         for(int i = 0 ; i<pos.size() ; i++){
         nums[2*i] = pos[i];
         nums[2*i+1] = neg[i];
      }
       int index = pos.size()*2 ; 
      for(int i = pos.size() ; i<neg.size() ; i++){
         nums[index]=nums[i];
         index++;
      }
    }
    for(int i = 0 ; i<nums.size() ; i++){
      cout<<nums[i]<<" ";
    }
    return 0;
}
