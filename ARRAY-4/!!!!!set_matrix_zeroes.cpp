#include<bits/stdc++.h>
using namespace std ; 
// BETTER SOLUTION  TC = O(2 * M * N ) SC = O(M+N) ,,, we cant do anything with the tc as we have to traverse through the matrix 
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // m = no of rows 
        int m = matrix.size() ; 
        // n = no of columns 
        int n = matrix[0].size() ; 
        vector<int>row(m,0); // | 
        vector<int>col(n,0);  // -
        // now start the marking 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j <n ; j++){
                if(matrix[i][j]==0) {
                    row[i] = 1 ; 
                    col[j] = 1 ; 
                }
            }
        }
        // now traverse and check if any of col or row has marked , then mark that element as zero 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(row[i] == 1 || col[j] == 1) matrix[i][j] = 0 ; 
            }
        }
    }
};

/// THE OPTIMUL SOLUTION WILL HAVE THE SAME TC AS THE BETTER BUT THE SC WILL BE 1 AS WE WILL BE SOING CHANGES IN THE MATRIX ONLY

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int col0 = 1 ; 
        // m = no of rows 
        int m = matrix.size() ; 
        // n = no of columns 
        int n = matrix[0].size() ; 

        // now do the marking 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(matrix[i][j]==0) {
                    // mark the row 
                    matrix[i][0] = 0 ; 
                    // mark the column 
                    if(j!=0) matrix[0][j] = 0 ; 
                    else col0 = 0 ; 
                }
            }
        }
         // we will traverse the first row and first column separetly 
         // now just traverse from i = = 1 and j = =1 
        for(int i = 1 ; i< m ; i++){
            for(int j = 1 ; j< n ; j++){
                if(matrix[i][0]==0 || matrix[0][j] == 0) matrix[i][j] = 0 ;
            }
        }

    // now check for the first row 
    if(matrix[0][0] == 0 ) {
        for(int j = 0 ; j< n ; j++) {
            matrix[0][j] = 0 ; 
        }
    }
       // now check for the first column
    if(col0 == 0 ) {
        for(int i = 0 ; i<m ; i++){
            matrix[i][0] = 0 ;
        }
    }
       
    }
};

