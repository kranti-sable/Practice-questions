//convert from decimal to binary
#include <iostream>
using namespace std;
void dectobin(int decnum){
    int n=decnum;
    int pow =1;
    int binnum=0;
    while(n>0){
        int rem =n%2;
        binnum+=rem*pow;
        n=n/2;
        pow=pow*10;
    }
    cout<<binnum<<endl;
}
int main(){
    dectobin(9);
    return 0;
}