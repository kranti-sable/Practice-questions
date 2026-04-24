//write a program to find tranpose of a square like n*n matrix.
#include<iostream>
using namespace std;
void printarr(int arr[][3],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<arr[i][j]<<",";
        }
    }
    cout<<endl;
}
void traspose(int arr[][3],int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    printarr(arr,n);
}
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    traspose(arr,3);
    return 0;
}