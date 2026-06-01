#include<bits/stdc++.h>
using namespace std ; 
int main(){
         string s = "subham" ; 
         unordered_map<char,int> mpp ; 
         for(int i = 0 ; i<s.length() ; i++){
            mpp[s[i]] += 1 ;
         }
         string a = "abcdefghijklmnopqrstuvwxyz" ; 
         for(int i = 0 ; i<a.length() ; i++){
            if(mpp.find(a[i]) != mpp.end()) cout<<a[i]<<" "<<mpp[a[i]]<<endl ; 
         }
    return 0 ; 
}        // provides a .find() operator for key only
// for key we have to use 
// for(auto it : mpp ){
//     if(it.second == tgt ) return true ; 
// }