#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr [6]={1,2,4,7,7,5};
   int large = arr[0];
   for(int i = 0 ; i < 6 ; i++){
    if(large<arr[i]) large=arr[i] ;
    else continue ;
   }
   cout<<large<<endl;
   int second_large = -1 ;
   for(int i = 0 ; i < 6 ; i++){
    if(second_large<arr[i]&& arr[i]!=large) second_large = arr[i];
    else continue;
     }
     cout<<second_large;
                           // better solution , TC = O(2N)



// a optimised solution TC = O(n)

int arr [6]={1,2,4,7,7,5};
   int large = arr[0]; int secondlarge = -1;    // for second largest
         for(int i = 1 ; i< 6 ; i++){
           if(arr[i]>large) {
            secondlarge = large;
            large = arr[i] ; 
           }
           else if (arr[i]>secondlarge && arr[i]<large) secondlarge = arr[i];
           else continue ;
         }
         cout<<large<<" "<<secondlarge<<endl;


// for second smallest  

int brr [6]={49,23,1,21,16,100};
   int smallest = brr[0]; int secondsmallest = INT_MAX;    
         for(int i = 1 ; i< 6 ; i++){
           if(brr[i]<smallest) {
            secondsmallest= smallest;
            smallest = brr[i] ; 
           }
           else if (brr[i]<secondsmallest && brr[i]>smallest) secondsmallest = brr[i];
           else continue ;
         }
         cout<<smallest<<" "<<secondsmallest;
           
         return 0;
   }