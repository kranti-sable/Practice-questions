#include<iostream>
using namespace std;
void numOccur(int *arr,int key,int n,int i){
    if(i==n){
       return;
    }
    if(arr[i]==key){
       cout<<i<<endl;
       numOccur(arr,key,n,i+1);
    }else{
        numOccur(arr,key,n,i+1);       
    }
}
int main(){
    int arr[]={3,2,4,5,6,2,7,2,2};
    int n=9;
    int key=2;
    numOccur(arr,key,n,0);
    return 0;
}