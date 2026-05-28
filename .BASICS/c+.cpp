#include<iostream>
using namespace std;
int main() {
       int n ;
        cin>>n;
        int arr[n] , brr[n];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i <n ; i++){
             brr[n-i]= arr[i];
        }
        for(int i = 0 ; i< n ; i++){
            cout<<brr[i];     // swapped array eith TC = O(n) and SC = O(n)
        }
   return 0 ;
}