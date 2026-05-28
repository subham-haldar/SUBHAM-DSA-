#include<bits/stdc++.h>
using namespace std ;                            // CODE TO GENERATE THE WHOLE PASCAL TRIANGLE TC = O(N*N) SC = O(N*N)

vector<int>generaterow(int row){
    long long ans = 1 ; 
    vector<int>ansrow ; 
    ansrow.push_back(1);
    for(int i = 1  ; i<row ; i++){
        ans = ans * (row-i) ;                 // THIS MUCH CODE TO GENERATE AN ENTIRE GIVEN ROW ,,,, and for generating the exact row , col ,, i<col
        ans = ans / i ; 
        ansrow.push_back(ans);
    }
    return ansrow ; 
}

int main(){
    vector<vector<int>>ANS ; 
    int n ; 
    cin>>n ; 
    for(int i = 1 ; i<=n ; i++ ){
        ANS.push_back(generaterow(i));
    }

    for(int i = 0 ; i<ANS.size() ; i++){
        for(int j = 0 ; j<ANS[i].size();j++){
            cout<<ANS[i][j]<<" ";
        }
    }
    
    return 0 ; 
}