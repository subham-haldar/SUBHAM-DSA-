#include<bits/stdc++.h>
using namespace std ; 

// MY SOLUTION 

class Solution {
public:    
    string reverseWords(string s) {
           string ans = "" ;
           
           int n = s.length() ; 
           int i = 0 ; 
           string words = "";
          
           // make the words string with no leading or trailing or extra zeroes 
           while(i<n){
            if(s[i]!=' ') words += s[i];
            else if(i!=0 && s[i]==' ' && s[i-1] != ' ') 
            words+=' ' ; 
            i++;
           }
            // remove the last space 
           if(words[words.length()-1] == ' ') words.erase(words.length()-1,1) ; 
           reverse(words.begin() , words.end()) ; 

           int j = 0 ;
           string rev = "";
           while(j<words.length()){
            if(words[j]!=' ')  rev += words[j] ; 
            else {
                reverse(rev.begin(),rev.end());
                ans += rev ; 
                ans +=' ';
                rev = "";
            }
            j++;
           }
           reverse(rev.begin(),rev.end());
           ans +=rev ;                        // TC = O(4N)
           return ans ;                       // SC = O(3N)
    }
};

// SHRADHA SOLUTION , TC = O(3N) SC = O(2N) worst case   SC = ANS + WORDS 
// 1 N = FOR REVERSING OF WHOLE STRING , 1 N = FOR THE TRAVERSAL PART , 1 N = sum of REVERSAL OF EACH WORD 
class solution {
public : 
string reverseWords(string s ) {
int n = s.length() ; 
string ans = "";
reverse(s.begin(), s.end());

for(int i = 0; i < n; i++) {
    string word = "";

    while(i < n && s[i] != ' ') {
        word += s[i];
        i++;
    }

    reverse(word.begin(), word.end());

    if(word.length() > 0) {
        ans += " " + word;
    }
}

return ans.substr(1);
  }
};

// OPTIMAL SOLUTION ,,, TC = O(N) SC = O(1)

