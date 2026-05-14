// Leetcode Q-191.Number of 1 bits.
#include<iostream>
using namespace std;
int numberOfBits(int n){
    int count=0;
    while(n>0){
        int lastdig=n&1;
        count=count+lastdig;
        n=n>>1;
    }
    return count;
}
int main(){
   cout<< numberOfBits(11)<<endl;
   return 0;
}