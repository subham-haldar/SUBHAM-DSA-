#include<bits/stdc++.h>
using namespace std;
int main() {


   class Solution {
   public:                                           // CONCEPT - IF WE ADD THE STRING TO ITS ORIGINAL ONE 
    bool rotateString(string s, string goal) {       // IF THE GIVEN STRING IS ROTATION OF THE OTHER THEN IT WILL BE A SUBSTRING OF 2*ORIGINAL STRING
        if(s.length()!=goal.length()) return false ;
        int n = s.length();
        for(int i = 0 ; i<n ; i++){
            s +=s[i];
        }                                            
        return s.find(goal)!=string::npos;
    }
};                                                    // THE OPTIMAL WAY IS TO GENERATE THE UPDATED STRING TO CHECK 


   return 0 ;
}    // SC = O(N) as we are doubling the length of the string 
     // TC = O(N) for the loop part then O(N*N) in worst case for the find operation and if the find uses linear time it will be O(N) time if the find uses linear time
     

// s length = 2n
// goal length = n

// The complexity of std::string::find() is implementation-dependent.

// In the worst case, it can behave like naive pattern matching:

// O((2n)×n)=O(n
// 2
// )

// Some library implementations use more optimized algorithms, but for interview/DSA analysis we usually assume:

// Worst-case Time: O(n²)