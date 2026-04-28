//for a positive N, wap that print all the prime numbers from 2 to N.(assume N>=2)
#include <iostream>
using namespace std;
int main(){
    int i,j,n=10;
    for(i=2;i<=n;i++){
        bool isprime =true;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime =false;
                break;
            }
        }
        if(isprime){
            cout<<i<<endl;
        }
    }
    return 0;
}