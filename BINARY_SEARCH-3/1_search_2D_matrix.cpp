#include<bits/stdc++.h>   // THE BASIC INTUITION IS THAT IF I SPREAD THAT MATRIX IN 1D 
using namespace std;      // WRITE THE ELEMENTS ROW-WISE 
                          // 1 2 3 4 5 6 7 8 9 10 
                          //  now how to find the position of lets say 4 ; 
                          // simple just to find row (idx/no of columns) and for column (idx%no of columns)
    class solution {
    public :                // TC = LOG(M*N) where m is rows and n is columns 
    bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();  // assuming the size of every mat[i] is same
    
    int low = 0, high = n * m - 1; 
     
     while (low <= high) {
        int mid = (low + high) / 2;
  
        int row = mid / m;      // HERE THE ENTIRE MATRIX IS SORTED 
                                // MEANS IF I EXPAND IN 1D row-wise then all the elements are sorted 
        int col = mid % m;

        if (mat[row][col] == target) return true;
        else if (mat[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
     return false;
       }
    };

    /// DEFINE A 2D MATRIX 
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };   