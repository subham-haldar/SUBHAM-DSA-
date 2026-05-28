#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr[5]={6,7,8,4,1}; 
   int num = 4 ; 
   for(int i = 0 ; i<5 ; i++){
      if(arr[i]==num) {
          cout<<i;
           break;
      }
   }

   return 0 ;
}