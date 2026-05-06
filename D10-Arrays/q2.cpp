#include <iostream>
using namespace std;

int index(int arr[],int n,int key){
    int start=0,end=n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
    }
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(int);
    int key=0;
    cout<<index(arr,n,key)<<endl;
}