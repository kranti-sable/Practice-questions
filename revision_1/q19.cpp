#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={2,4,7,2,7};
    cout<<"Unique value is:"<<findUnique(arr,5)<<endl;
    return 0;
}