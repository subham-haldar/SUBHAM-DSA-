// HERE THE MATRIX IS SORTED ROW-WISE AND COLUMN-WISE BUT NOT likw the previous case 
#include<bits/stdc++.h>
using namespace std;
class solution {
    public :
bool searchelement(vector<vector<int>> &mat , int target){
     int n = mat.size();
     int m = mat[0].size();
     int row = 0 ; 
     int column = m-1;
     while(row < n && column < m) {
        if(mat[row][column]==target) return true ;
        else if(mat[row][column]<target) row ++ ;                  // WE WILL START FROM THE UP RIGHT CORNER  OR  BOTTOM LEFT CORNER 
                                                                   // BECAUSE THERE WILL BE ONE PART INCREASING OR DECREASING , and we have to eliminate one 
                                                                   // the core logic is to move up and down to find the element 
        else column -- ;
     }
     return false ;             // THE WORST CASE TC = O(M+N) when we start from either point and the target is at last point 
 }
};