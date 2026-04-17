
#include<iostream>
using namespace std;
void convert2d(int arr[],int n,int m){
    int h=0;
    for(int i=0;i<n;i++){
        cout<<"[";
        for(int j=0;j<m;j++){
            cout<<arr[h]<<",";
        h++;
        }
        cout<<"],";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4};
    convert2d(arr,2,2);
    return 0;
}