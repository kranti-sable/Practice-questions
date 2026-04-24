/*print out the sum of the number in the second row of the "nums" array.*/
#include<iostream>
using namespace std;
void sumofrow(int arr[][3],int n){
    int sum=0;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<n;j++){
         sum+=arr[i][j];
        } 
    }
    cout<<sum<<endl;
}
int main(){
    int arr[3][3]={{7,3,2},
                   {5,5,5},
                   {5,6,7}};
    sumofrow(arr,3);
    return 0;
}