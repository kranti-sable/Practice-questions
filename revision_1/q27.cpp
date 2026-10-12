#include<iostream>
using namespace std;

int getPivot(int arr[],int size){
int start=0,end=size-1;
    while(start<end){
     int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    return start;
}
int binarysearch(int arr[],int s,int e,int target){
   int start=s,end=e;
   while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      return mid;
    }else if(arr[mid]<target){
       start=mid+1; 
    }else{
        end=mid-1;
    }
   }
   return -1;
}
int main(){
    int arr[]={8,10,17,1,3};
    int size=5;
    int target=3;
    int pivot=getPivot(arr,size);
    if(target>=arr[pivot] && target<=arr[size-1]){
        cout<<binarysearch(arr,pivot,size-1,target)<<endl;
    }else{
        cout<<binarysearch(arr,0,pivot-1,target)<<endl;
    }
    return 0;
}