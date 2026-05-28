#include <bits/stdc++.h>
using namespace std;
 void swapelements(int arr[],int a , int b ) {
     int temp = arr[a];
     arr[a]= arr[b];
     arr[b]= temp ;      
 }  
    int main()
{
      int arr [7]={10,90,49,2,1,5,1};
        if(arr[0]<arr[1]) swapelements(arr, 0 , 1 );
    for(int i = 2 ; i < 7 ; i+=2 ) {
          if(arr[i]<arr[i-1])  swapelements(arr,i,i-1) ;
             if(arr[i]<arr[i+1] && i!=6)  swapelements(arr , i , i+1);
                 if(arr[7]<arr[6]) swapelements(arr , 7 ,6);
                      else continue ; 
      }
      for(int i = 0 ; i<7 ; i++){
          cout<<arr[i]<<" ";
      }
         return 0;
}