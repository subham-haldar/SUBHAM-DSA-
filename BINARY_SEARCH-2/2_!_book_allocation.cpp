// RETURN THE MINIMUM OF THE ALL POSSIBLE CASES WHERE A STUDENT GETS MAXIMUM PAGES  
#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int>nums{25,46,28,49,24};
   int students = 4 ;
   if(students>nums.size()) return -1;
   int sum = 0 ; 
   for(int i = 0 ; i<nums.size();i++){
          sum = sum + nums[i];
   }
   //  I AM LOOKING FOR MAXIMUM NUMBER OF PAGES A STUDENTS CAN GET
   // IF I SAY THAT THE STUDENT IS GETTING AT MAX 49 PAGES THEN HE CAN HOLD 25 , 36
   // BUT IF I SAY THE MAX CAPACITY HE CAN HOLD IS 25 THEN THE 28 , 49 CANT BE HOLD 
   int low = *max_element(nums.begin(),nums.end());
   int high = sum ; 
   while(low<=high){
      int mid = low+(high-low)/2;
      int count = 1 ;
      int load = nums[0]; 
      for(int i = 1 ; i<nums.size();i++){
         if(load + nums[i]<=mid) load +=nums[i];  // ALWAYS CHECK IN THAT INDEX , while iterating
         else {
            count ++  ;
            load = nums[i];
         }
      }
      if(count>students) low = mid+1;
      else high = mid-1;
   }
   cout<<low;    // check that whether low or high is the ans 
   return 0;
}             // TC = O(LOG SUM-MAX+1) * O(N)