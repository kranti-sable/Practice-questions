#include<iostream>
using namespace std;
int firstOccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
   return firstOccur(arr,n,i+1,key);
}
int lastOccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int foundAhead=lastOccur(arr,n,i+1,key);
    if(foundAhead != -1){
        return foundAhead;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}
int main(){
    int arr[]={2, 4, 6, 8, 6};
    int n=5;
    int key=6;
    int i=0;
    cout<<"first Occur:"<<firstOccur(arr,n,i,key)<<endl;
    cout<<"last Occur:"<<lastOccur(arr,n,i,key)<<endl;

}