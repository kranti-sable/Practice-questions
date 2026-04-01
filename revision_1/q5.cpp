//max profit 
#include <iostream>
using namespace std;
void maxprofit(int arr[],int n){
   int minprice=arr[0];
   int maxprofit=0;
    for(int i=0;i<n;i++){
       minprice=min(minprice,arr[i]);
       int bestbuy=arr[i]-minprice;
       maxprofit= max(maxprofit,bestbuy);
    } 
    cout<<maxprofit<<endl;
}
int main(){
  int arr[]={7,1,5,3,6,4};
  int n=sizeof(arr)/sizeof(int);
  maxprofit(arr,n);
  return 0;
}