#include<bits/stdc++.h>
using namespace std ; 


// THE OPTIMAL SOLUTION 
// LOGIC = JUST TRANSPOSE THE MATRIX AND reverse the rows to get the result

// TC = O(N/2 * N/2) + O(N*N/2)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // no of rows 
        int m = matrix.size();
        // no of columns 
        int n = matrix[0].size();
        for(int i = 0 ; i<m-1 ; i++){
            for(int j = i+1 ; j<n ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0 ; i< m ; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// THE BRUTE FORCE SOLUTION 
// LOGIC ---> take the element and put it in its correct position in the new matrix 

// [i][j] of the old matrix --> [j][n-1-i] of the new matrix ,,,, tc = o(n*n) == sc 


