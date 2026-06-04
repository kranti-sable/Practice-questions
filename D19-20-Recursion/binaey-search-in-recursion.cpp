#include<iostream>
using namespace std;
int binsearch(int arr[],int st,int end,int key){
      int mid=(st+end)/2;
    if(st>end){
        return -1;
    }
      if(arr[mid]==key){
      return mid;
      }
      if(arr[mid]<key){
        return binsearch(arr,st=mid+1,end,key);
      }else{
        return binsearch(arr,st,end=mid-1,key);
      }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int key=5;
    int n=7;
    int st=0;
    int end=n-1;
    cout<<binsearch(arr,st,end,key)<<endl;
}

