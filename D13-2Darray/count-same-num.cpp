/*print the number of all 7's that are in the 2d array*/
#include<iostream>
using namespace std;
void countnum(int arr[][3],int n,int key){
    int count=0;
    for(int i=0;i<n;i++){
            if(key==arr[i][i]){
                count++;
            }
    }
    cout<<count<<endl;
}
int main(){
    int arr[3][3]={{7,3,2},
                   {8,7,4},
                   {5,6,7}};
    countnum(arr,3,7);
    return 0;
}