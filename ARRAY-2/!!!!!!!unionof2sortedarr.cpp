#include<bits/stdc++.h>
using namespace std;
int main() {
   // BRUTE FORCE SOLUTION : INSERT ELEMENTS IN A SET , PRINT THE SET
   // TC = 2NLOGN + N  SC = 2N(worst case when both the elements in arr and brr are different )
   int arr[6]={1,1,2,3,4,5};
   int brr[6]={2,3,4,4,5,6};
   set<int>bat; // ordered set 
   for(int i = 0 ; i< 6 ; i++){
         bat.insert(arr[i]);                
         bat.insert(brr[i]);
    }
    for( int  x : bat)  cout<<x ;

// !!!!! OPTIMAL SOLUTION   2 POINTER APPROACH 
// TC = 2N ,  SC = 2N
int i = 0 , j =  0 ;
vector<int>st ; 
while(i<6 && j < 6){
    if(arr[i]<= brr[j]) {
         if(st.size()==0||*st.rbegin()!=arr[i]) { // TO DETECT LAST INSERTED ELEMENT FOR SET IT IS *st.begin() but fot array it is arr.back()
            st.push_back(arr[i]) ;
         }
         i++;
       }
       else {
           if(st.size()==0||*st.rbegin()!=brr[j]) {
            st.push_back(brr[j]) ;
         }
         j++;
       }
    } 
    while(j<6){
            if(st.size()==0||*st.rbegin()!=brr[j]) {
            st.push_back(brr[j]) ;
         }
         j++;
    }
    while(i<6){
        if(st.size()==0||*st.rbegin()!=arr[i]) {
            st.push_back(arr[i]) ;
         }
         i++;
    }
    for(int x : st) cout<<x;   // THIS IS SAME FOR BOTH SET AND ARRAY 

       return 0 ;
}