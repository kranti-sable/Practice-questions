//kadan's approche
#include <iostream>
using namespace std;
void subarraysum(int arr[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
        currsum=0;
        }
    }
    cout<<maxsum<<endl;
}
int main(){
    int arr[]={-4,-2,-3};
    int n=3;
    subarraysum(arr,n);
    return 0;

}