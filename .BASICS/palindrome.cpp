#include <iostream>
using namespace std;
int main (){
     int n , count = 0 , revnum = 0 ; 
     cin>>n;
     int temp = n ;
     while(n!=0){    
          int a  = n % 10 ;
          count++ ; 
          revnum = (revnum*10)+a;
          n = n / 10 ;                 // TC = O(log base 10 N ) , for divisions the tc is this type only ,
                                      // base is what we divide with 
     }
        cout<<count<<endl<<revnum<<endl;
        if(revnum==temp) cout<<"PALINDROME";

    return 0 ;
}