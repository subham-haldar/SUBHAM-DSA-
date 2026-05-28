#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{10,20,25,30,40,50,60};
    int x ; 
    cin>>x;
    int  ceil = -1 ;
    // FOR CEIL ; ceil = smallest no in array >=x (like lower bound)
    int high = nums.size()-1;
    int low = 0 ;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>=x){
            ceil = nums[mid];
            high = mid-1;
        }
        else if(nums[mid]<x) low = mid+1;
    }
    cout<<ceil;
     
    // FOR FLOOR ; floor = largest no in array <=x ; 
    int floor = -1 ; 
    int high = nums.size()-1;
    int low = 0 ; 
    while(low<=high){
         int mid = (low+high)/2;
         if(nums[mid]<=x){
             floor = nums[mid];
             low = mid+1;
         }
         else high = mid-1;
    }
    cout<<floor;
    return 0;
}