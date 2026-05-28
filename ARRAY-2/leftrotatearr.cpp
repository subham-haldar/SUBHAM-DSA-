#include<bits/stdc++.h>
using namespace std;
void reverse(int crr[], int i , int j){
   while(i<j){
    int temp = crr[i];
    crr[i]=crr[j];
    crr[j]=temp;
    i++ ; j--; 
   }
}
int main() {           // ROTATE BY 1 PLACE !!!! ,,, TC O(2N) ; SC O(1)
   int arr[5]={1,2,3,4,5};       
    int temp = arr[0];
    for(int i = 1 ; i<5 ; i++){
       arr[i-1]=arr[i];
    }
    arr[4]=temp;
    for(int i =  0 ; i<5 ; i++){
        cout<<arr[i];
    }


   // by k steps 
   int brr[7]={1,2,3,4,5,6,7};   int k = 3;    // BRUTE FORCE !!!!!!! TC = O(N+K)  SC = O(K)
   int temp_[3]={1,2,3};  // this will be done by using a loop 
// shifting 
for(int i = 3 ; i <7;i++){
    brr[i-3]=brr[i];
}
// inserting the remaining elements
//int  j = 0 ; 
for(int i = 4 ; i<7 ; i++){
   brr[i]=temp_[i-4];
  // j++;
}
// printing the rotated array 
for(int i = 0 ; i<7 ;i++){
    cout<<brr[i];
}


// OPTIMISED SOLN !!!!!!!!!!
  int crr[7]={1,2,3,4,5,6,7};   int a = 3;
  // reverse the first k elements , then the next n-k elements 
  // then reverse thw whole array 
  reverse(crr , 0 , 2 ) ;
  reverse(crr , 3,6);
  reverse(crr,0,6);
  for(int i = 0 ; i<7 ; i++){
    cout<<crr[i];
  }
  return 0 ;
}