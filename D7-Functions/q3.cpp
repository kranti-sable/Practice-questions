/*write a function calculate the sum of digs of number */
#include <iostream>
using namespace std;
int sumdigs(int n){
    int dig,sum=0;
    while(n>0){
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<"sum of digits: "<<sumdigs(123)<<endl;
}