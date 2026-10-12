#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
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
int main(){
    int arr[]={8,10,17,1,3};
    int size=5;
    cout<<"Pivot index no "<<getPivot(arr,size)<<endl;
    return 0;
}