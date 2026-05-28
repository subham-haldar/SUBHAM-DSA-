#include<bits/stdc++.h>
using namespace std;
int main() {
   int arr[7]={1,4,3,2,2,1,3};
   static int brr[7];            // just removes the duplicate
                             // makes the duplicate ones = 0
   for(int i = 0 ; i<7 ; i++){
    if(brr[arr[i]]==0) brr[arr[i]]=1;
    else arr[i]=0;
   }
    for(int i = 0 ; i<7 ; i++){
    cout<<arr[i]<<" ";
   }

   //remove the elements and make the digits in ascending order
   // using sets but TC = NLOGN as st.insert has log n tc ,, SC = O(n)

int brr[8]={1,2,2,6,3,3,4,5};
   set<int>st;
   for(int i = 0 ; i< 8 ; i++){
      st.insert(brr[i]);
   }
   for(int x : st){
      cout<<x<<" ";
   }

    // no of unique elements using 2 pointer algorithm 
    int crr[10]={1,1,2,2,3,4,4,5,5,6};
          int i = 0 , j = 1 ;
          while(i<j && i<9 && j<10){
            if(crr[j]!=crr[i])  {
               crr[i+1] = crr[j];
               i++;
            }
            else j++;
         }
         cout<<"no of unique elements = "<<i+1;


//   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


   int arr[6]={1,5,2,3,4,1};
   int brr[6]={2,6,4,4,3,3};
   vector<int> unn;
   set<int>st;
   for(int i = 0 ; i< 6 ; i++){
      st.insert(arr[i]);
   }
   for(int i = 0 ; i< 6 ; i++){
      st.insert(brr[i]);
   }
   for(int x : st){
      unn.push_back(x);
   }
   for(int i : unn){
      cout<< i <<" ";
   }
   cout<<"size of array = "<<unn.size();

         return 0 ;
}