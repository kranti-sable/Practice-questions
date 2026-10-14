#include<iostream>
#include<string>
using namespace std;
void reversString(string &s,int size){
    int start=0,end=size-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
    int main(){
    string s="kranti";
    int size=6;
    reversString(s,size);
    for(int i=0;i<size;i++){
       cout<<s[i]<<" ";
    }
    cout<<endl;
    return 0;
}