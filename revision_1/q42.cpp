#include<iostream>
#include<vector>
using namespace std;
int numOfBits(int n){
    int count=0;
    while(n>0){
            n=n &(n-1);
            count++;
    }
    return count;
}
int main(){
    int n=10;
    cout<<numOfBits(n)<<endl;
}
