#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{3,4,6,7,9,12,16,17};
    /// ITERATIVE CODE 
    int c = -1 ; 
    int tgt ;
    cin>>tgt ; 
    int low = 0 ; 
    int high = nums.size()-1 ; 
    while(low<=high && high<nums.size()){
        int mid = (low+high)/2; 
        if(nums[mid]==tgt) {
            c = mid ;
            break ;
        }
        else if(nums[mid]<tgt) low = mid + 1 ;
        else if(nums[mid]>tgt) high = mid-1; 
    }
    if(c == -1) cout<<"not present";
    else cout<<c ;

    /// RECURSIVE IMPLEMENTATION



    // THE OVERFLOW CASE TO REMOVE ,,, (mid = low + (high-low)/2) , use only when search space is till int max  or use long long 

    return 0 ; 
}
// THE TIME COMPLEXITY OF THIS IS LOG N , where n is number of elements 