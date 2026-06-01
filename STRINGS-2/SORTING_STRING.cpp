#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<string>vector ; 
   for(int i = 1 ; i<= 2 ; i++){
    string s = "";
    cin>>s;
    vector.push_back(s) ;
   }
   sort(vector.begin(),vector.end());
   for(int i = 0 ; i<vector.size() ; i++){
    cout<<vector[i]<<endl;
   }
   return 0 ;
}         // strings are sprted as lexicographical method ,, i.e a<b<c<d
// aaaaaa
// bb will  be the sorted order 