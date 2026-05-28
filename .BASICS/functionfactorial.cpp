#include <iostream>
using namespace std;
int function(){
    cout<<"randi"<<endl;
    return 3;
}
int sum(int a , int b){
 int s = a + b;
 return s ;  
}
int main()
{
   sum(12,14);
//    cout<<sum(12,14)<<endl;
   function();
//    int value = function();
//    cout<<"value = "<<value<<endl;
    return 0;
}