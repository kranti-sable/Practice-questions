#include <iostream>
using namespace std;
void rotatearr(int arr[][3],int n,int m){
     int srow=0,scol=0;
     int erow=n-1,ecol=m-1;
     while(scol<=ecol && srow<=erow){
    for(int j=scol;j<=ecol;j++){
        cout<<arr[scol];
    }
}
    cout<<endl;
}
int main(){
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    rotatearr(arr,3,3);
    return 0;
}