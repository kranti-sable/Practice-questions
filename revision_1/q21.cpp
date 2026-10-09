#include<iostream>
using namespace std;
void sortZeroandones(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        if(arr[left]==0){
        left++;
        }
        else if(arr[right]==1){
            right--;
        }
        else{
            swap(arr[left], arr[right]);
          left++;
          right--;
        }
    }
}
int main(){
    int arr[]={1,0,1,0,0,1};
    int size=6;
    sortZeroandones(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}