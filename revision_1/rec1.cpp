#include<iostream>
#include<vector>
using namespace std;
int printfactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * printfactorial(n - 1);
}
int sumOfN(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumOfN(n - 1);
}
bool checksorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return checksorted(arr+1,n-1);
}
int findFibo(int m){
   if (m == 0) return 0;
    if (m == 1) return 1;
   return findFibo(m-1)+findFibo(m-2);
}

int main(){
    
    cout<<printfactorial(5)<<endl;
    cout<<sumOfN(5)<<endl;
    int arr[]={1, 3, 2, 5};
    int n=5;
    cout<<checksorted(arr,n)<<endl;
    int m=6;
    cout<<findFibo(m)<<endl;
}