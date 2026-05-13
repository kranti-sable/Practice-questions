/*Q-- Given a non-empty array of integers nums,every element appears twice except for one .find that single one.
you must implement a soution with a linear runtime complexity and use only constant extra space.  
Example 1: input:nums=[2,2,1]
           Output: 1          */
#include<iostream>
using namespace std;
void findSingleVal(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
       ans= ans^arr[i];
    }
    cout<<ans<<endl;
}
int main(){
    int arr[]={4,1,2,1,2};
    findSingleVal(arr,5);
    return 0;
}