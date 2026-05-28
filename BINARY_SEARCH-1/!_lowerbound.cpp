#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums{3,5,8,8,8,8,15,19,19,19}; // LOWER BOUND IS THE SAMLLEST INDEX such that (arr[ind]>=tgt)
    int tgt ;                                 // if the element is not present the low pointer will point at nums.size()
    cin>>tgt ;
    int c = -1 ;
     // the linear search code 
    for(int i = 0 ; i <nums.size();i++){
        if(nums[i]>=tgt) {
            c = i ;
            break ; 
        }   // LOWER BOUND IS ALSO HELPFUL IF YOU WANT TO FIND THE INSERT POSITION of an element 
    }
    if(c!=-1) cout<<c;
    else cout<<"not found" ;  

    //// THE BINARY SEARCH CODE (sorted array)
    int low = 0 ; 
    int high = nums.size()-1 ;
    int ans = nums.size() ; 
    while(low<=high) { 
        int mid = (high + low)/2;
        if(nums[mid]>=tgt) {
            ans = mid ;
            high = mid - 1 ;
        }
        else if (nums[mid]<tgt) low = mid+1 ; 
    }
    cout<<ans;
    
    return 0 ;
}