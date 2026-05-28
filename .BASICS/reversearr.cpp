#include <bits/stdc++.h>
using namespace std;
void swaparray(int arr[] , int a , int b ){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int main(){
       int arr[6]={3,1,6,7,8,2};
       int i = 0 , j = 5 ;  
       while(i<j){                       // reversed the array using TC = O(n) and SC = O(n) 
        swaparray(arr, i , j);
        i++ ;
        j-- ; 
       }
       for(int i = 0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
       }   
      return 0;
}