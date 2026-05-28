#include<iostream>
using namespace std;
int main(){
       int arr[6]={1,2,3,4,5,6};
       int sum = 0;
       for(int i=0;i<=5;i++ ){
          sum = sum+arr[i];
       }
       cout<<arr[3]+3<<endl;
      cout<<"the sum of elements of the array is = "<<sum;
    return 0;
} 