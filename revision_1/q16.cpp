#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int start=0,end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,2,7,1,9,3};
    int size=6;
    reverseArray(arr,size);
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
cout << endl;
    return 0;
}