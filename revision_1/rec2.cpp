#include<iostream>
using namespace std;
int firstOccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
   return firstOccur(arr,n,i+1,key);
}
int lastOccur(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int foundAhead=lastOccur(arr,n,i+1,key);
    if(foundAhead != -1){
        return foundAhead;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
long long fastPower(long long x, int n) {
    // 1. Base case: anything to the power 0 is 1
    if (n == 0) {
        return 1;
    }

    // 2. Recursive call: calculate half power and store the returned value
    long long halfPower = fastPower(x, n / 2);

    // 3. Square the half power
    long long halfPowerSq = halfPower * halfPower;

    // 4. If power is odd, multiply with x one extra time
    if (n % 2 != 0) {
        return x * halfPowerSq;
    }

    // 5. If power is even, just return the squared half power
    return halfPowerSq;
}
int main(){
    int arr[]={2, 4, 6, 8, 6};
    int n=5;
    int key=6;
    int i=0;
    cout<<"first Occur:"<<firstOccur(arr,n,i,key)<<endl;
    cout<<"last Occur:"<<lastOccur(arr,n,i,key)<<endl;
    cout << "Fast Power (2^10): " << fastPower(2, 10) << endl;
}