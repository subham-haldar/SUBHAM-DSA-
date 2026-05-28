#include<bits/stdc++.h>
using namespace std;
int main() {                 
string s  ; 
cin>>s ; 
int hash[26]= {0};
for(int i = 0 ; i<s.size() ; i++){
    hash[s[i]-'A']+=1;                 // stores only lowercase letters when s[i]-'a'
}                                      // stores only uppercase letters when s[i]-'A'
int q ; 
cin>>q;
while(q--){
    char c ; 
    cin>>c ;
    cout<<hash[c-'A']<<endl;
}
char ch = 'x';
    int x = (int)ch ;
    cout<<x<<endl;
    cout<<ch;

   return 0 ;
}