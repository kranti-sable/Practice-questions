/*Q-- Write a function to clear the range of bits form i to j in a given number.
(i & j are counted backwards from the right end of the number)
Examples: input: num=15,i=1,j=3
          output:1                     */
#include<iostream>
using namespace std;
int clearIandJbits(int num,int i,int j){
    int bitmask=~0<<(j+1)|(1<<i)-1;
    int ans=num&bitmask;
    cout<<ans<<endl;
    return num&bitmask;
}
int main(){
    clearIandJbits(31,1,3);//17
    return 0;
}