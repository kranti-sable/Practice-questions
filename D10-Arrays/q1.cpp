#include <iostream>
using namespace std;

int inputnum(int *num,int n){
    bool isnum=true;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(num[i]==num[j]){
        return true;
         }
      }
    }
    return false;
}
int main(){
    int num[]={1,1,3,3,4,4};
    int n =sizeof(num)/sizeof(int);
    inputnum(num,n);
    cout<<inputnum(num,n)<<endl;
}