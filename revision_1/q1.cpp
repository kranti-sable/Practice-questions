//optimal approch
#include <iostream>
using namespace std;
void subarry(int arr[],int n){
    int maxsum=INT_MIN;
     for(int start=0;start<n;start++){
     int currsum=0;
      for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(maxsum,currsum);
         }
       }
    cout<<maxsum<<endl;
}
int main(){
    int arr[]={1,-2,3};
    int n=sizeof(arr)/sizeof(int);
    subarry(arr,n);
    return 0;
}