#include<iostream>
#include <algorithm>
using namespace std;
void pairSum(int arr[],int target,int size){
    int start=0,end=size-1,sum=0;
    while(start<end){
       int sum=arr[start]+arr[end];
       if(sum==target){
        cout<<arr[start]<<"+"<<arr[end]<<"="<<target<<endl;
        start++;
        end--;
       }else if (sum > target) {
            end--;
       } else {
            start++;
}
 }
}
int main(){
    int arr[]={2,4,-1,5,8,3};
    int target=7;
    int size=6;
    sort(arr,arr+size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    pairSum(arr,target,size);
    return 0;
}