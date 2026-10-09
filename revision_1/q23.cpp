#include<iostream>
using namespace std;
void binarysearch(int arr[],int size ,int key){
     int start=0,end=size-1;
     while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<mid<<endl;
            return;
        }else if(arr[mid]<key){
           start=mid+1; 
        }else{
           end=mid-1; 
        }
     }
     cout<<"not found"<<endl;
}
int main(){
    int arr[]={2,5,8,12,16,23};
    int size=6;
    int key =24;
    binarysearch(arr,size,key);
}