//print the digit of given number in reverse using while loop. n=10829.
#include <iostream>
using namespace std;
int main(){
    int n=10829,dig;
    while(n>0){
        dig=n%10;
        cout<<dig<<endl;
        n=n/10;
    }
    return 0;

}