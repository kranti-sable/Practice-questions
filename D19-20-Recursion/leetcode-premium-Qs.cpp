/*Q--we are given a string S,we need to find the count of all contiguous substrings
staring and ending with the same character */
#include<iostream>
#include<string>
using namespace std;
int sameStr(string str,int n,int i,int j,int count){
    if(i==n){
        return count;
    }
    if(j==n){
    return sameStr(str,n,i+1,i+1,count);
    }
    if(str[i]==str[j]){
        count++;
    }
     return sameStr(str,n,i,j+1,count);   
}
int main(){
    string str="aba";
    cout<<sameStr(str,3,0,0,0)<<endl;
}