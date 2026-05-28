#include<bits/stdc++.h>
using namespace std;
int  main(){
    vector<int>nums{2,4,6,8,11,13};
    int x ;
    cin>>x ;
    // to find  the first and last occurence , just find the lower bound to find 1st occurence and the upper bound-1 to find the last occurence 
    int low = 0 ; 
    int high = nums.size()-1 ;
    int ans1 = nums.size() ; 
    while(low<=high) { 
        int mid = (high + low)/2;
        if(nums[mid]>=x) {
            ans1 = mid ;  // the lower bound
            high = mid - 1 ;
        }
        else if (nums[mid]<x) low = mid+1 ; 
    }
    int Low = 0 ; 
    int High = nums.size()-1 ;
    int ans2=nums.size();
    while(Low<=High) { 
        int Mid = (High + Low)/2;
        if(nums[Mid]>x) {    // the upper bound
            ans2 = Mid-1 ;
            High = Mid - 1 ;
        }
        else if (nums[Mid]<=x) Low = Mid+1 ; 
    }
    if(nums[ans1]!=x || ans1 == nums.size()) cout<<"[-1,-1]";
    else cout<<ans1<<" "<<ans2; 

       // \\\\\\\ \\\|| | NOW A SIMPLE BINARY SEARCH CODE 
       int low = 0 ; 
       int high = nums.size();    // first find the first occurence 
       int ans1 = -1 ; 
       while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==x) {
          ans1 = mid ;
          high = mid - 1 ;
        }
        else if (nums[mid]>x) high = mid - 1 ; 
        else low = mid + 1 ; 
       }
       
       int LOW = 0 ; 
       int HIGH = nums.size();
       int ans2 = -1 ; 
       while(LOW<=HIGH){
        int mid = (LOW+HIGH)/2;
        if(nums[mid]==x) {  // find the last occurence
            ans2 = mid ; 
            LOW = mid +1 ;
        }
        else if (nums[mid]>x) HIGH = mid - 1 ; 
        else LOW = mid + 1 ;
       }
       if(nums[ans1] != x || ans1 == nums.size()) cout<<"[-1,-1]";
       else cout<<ans1<<" "<<ans2;
       
    return 0 ;  // TC = 2 log base 2 N
}