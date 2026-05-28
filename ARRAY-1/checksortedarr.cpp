#include<bits/stdc++.h>
using namespace std ;
int main() {
    int arr[6]={1,2,2,0,3,4};
    int c = 0 ;
    for(int i = 0 ; i<5 ; i++ ){
        if(arr[i]<=arr[i+1]) c++;
    }
    if(c==5) cout<<"sorted";
    else cout<<"not sorted";

   return 0 ;
}