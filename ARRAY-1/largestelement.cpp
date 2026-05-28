#include<iostream>
using namespace std;
int main() {
   int arr[5]={3,2,12,5,2};
   int large = arr[0];
   for(int i = 0 ; i<5 ; i++){
    if(arr[i]>large) large = arr[i];
    else continue ;

   }
   cout<<large ;


   return 0 ;
}