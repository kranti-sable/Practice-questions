#include<iostream>
using namespace std;
int firstOccur(int arr[],int size,int target){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
         end = mid - 1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOccur(int arr[],int size,int target){
    int start=0,end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={0,5,5,6,6,6,6,8,9,10};
    int size=10;
    int target=6;
    cout<<"first Ocuurence index:"<< firstOccur(arr,size,target)<<endl;
    cout<<"first Occurence index:"<<lastOccur(arr,size,target)<<endl;
    return 0;
}