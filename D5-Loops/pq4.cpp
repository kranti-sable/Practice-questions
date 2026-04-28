//check if a number is prime or not .
#include <iostream>
using namespace std;
int main(){
    int n=12;
    int A=1;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            A=0;
            break;
        }
    }
    if (A==1){
        cout<<"number is prime"<<endl;
    }
    else{
        cout<<"number is not prime"<<endl;
    }
    return 0;
}