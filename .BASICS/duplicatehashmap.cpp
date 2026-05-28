#include<iostream>
using namespace std;
int main() {
   int arr[10]={1,2,3,4,5,4,6,7,8,7};
   int visitarr[10]={0};
   for(int i = 0 ; i<10;i++){
      if(visitarr[arr[i]]==0) visitarr[arr[i]]=1 ;
      else cout <<arr[i]<<" ";
   }
   return 0 ;
}