#include<bits/stdc++.h>
using namespace std;
int main() {

   char a = 'G' ;
   int x = a - 'A'+'a'; // converts uppercase to lowercase 
   
   char ch = 'q';
   int y = ch - 'a' + 'A' ;  // converts lowercase to uppercaase 

   cout<<x<<endl ; 
   char c = char(x) ;   
   cout<<c<<endl  ;

   cout<<y<<endl ;
   char d = char(y) ; 
   cout<<d<<endl ;

   int z = int(ch) ;
   cout<<z<<endl;


   string s1 = "123" ;
   string s2 = "3312" ; 
   cout<< s1+s2<<endl ;
    
   char g = '9' ;    // if char  g = '97' then g is now a string not a char value type
   int v = g-'0';
   cout<<v ;  
   
   return 0 ;

}