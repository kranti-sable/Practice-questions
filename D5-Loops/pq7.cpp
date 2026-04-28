//wap to input a number and check whether the number is armstrong number or not.
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n=371;
    int A=n,sum=0,dig,i;
    for(i=1;i<=n;i++){
        dig=n%10;
        sum=sum+(dig*dig*dig);
        n=n/10;
    }
    if(sum==A){
        cout<<"it's armstrong"<<endl;
    }else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}