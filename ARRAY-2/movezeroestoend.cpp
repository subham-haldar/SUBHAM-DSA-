#include<bits/stdc++.h>
using namespace std;
void rev(int crr[] , int a  , int b ){
   int temp = crr[a];
   crr[a]=crr[b];
   crr[b]=temp;
}
int main() {              //  BRUTE FORCE !!!!!!! TC = O(3N)   SC = O(N)
   int arr[10]={1,0,2,3,2,0,0,4,5,1};
   int count = 0 ;                          // insertion of elements in brr 
   for(int i = 0 ; i<10 ; i++){
      if(arr[i]!=0) count ++ ; 
   }
   int brr[count];
   int j = 0 ; 
   for(int i = 0 ; i<10 ; i++){
      if(arr[i]!=0){
         brr[j]=arr[i];
         j++ ; 
      }
   }

   // making the elements from i = 0 to i = count - 1 insert from brr 
     for(int i = 0 ; i <10 ; i++){
      if(i<count) arr[i]=brr[i];
      else arr[i]=0;
     }

     for(int i = 0 ; i<10 ; i++)  cout<<arr[i];

// OPTIMAL SOLUTION !!!!!!!!! 2 POINTER APPROACH 
int crr[10]={1,0,2,3,2,0,0,4,5,1};
int j = -1 ;
for(int i = 0 ; i<10 ; i++){     // fixing the j pointer to the first zero occuring 
   if(crr[i]==0) {
      j = i ;
      break;
   }
} 
for(int i = j+1 ; i<10 ; i++){
   if(crr[i]!=0) {        // swapping concept to make zeroes at last 
      rev(crr , i , j);
      j++ ; 
   }
}
 
for(int i = 0 ; i<10 ; i++)  cout<<crr[i];
  return 0 ;
}