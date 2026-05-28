#include<bits/stdc++.h>
using namespace std;
int value(char ch) {
    if(ch == 'I') return 1 ;
    else if(ch == 'V') return 5;
    else if(ch == 'X') return 10;
    else if(ch == 'L') return 50;
    else if(ch == 'C') return 100;
    else if(ch == 'D') return 500;
    return 1000;      // M  
}
int main() {
   string s = "XLVCD";
   int sum = 0 ; 
   for(int i = 0 ; i<s.length() ; i++){               
    int current = value(s[i]) ;                  // take a current value and compare it with the next value 
    if(i+1 < s.length() && current < value(s[i+1]) )  sum = sum - current ;      // is the next element for current doesnt exist then simply add it 
    else sum = sum + current ; 
   }
   cout<<sum ; 
   

   return 0 ;                // TC = O(N) SC= O(1) or SC= O(K) for kk roman elements 
}


// unordered_map<char, int> roman = {
//     {'I', 1},
//     {'V', 5},                                                use this to create map 
//     {'X', 10},
//     {'L', 50},
//     {'C', 100},
//     {'D', 500},
//     {'M', 1000}
// };