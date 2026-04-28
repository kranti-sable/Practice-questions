//for positive n,wap that prints the first n fibonacci numbers 
#include <iostream>
using namespace std;
int main(){
    int i,n=10;
    int a=0,b=1;
    for(i=0;i<n;i++){
        cout<<a<<endl;
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;
}