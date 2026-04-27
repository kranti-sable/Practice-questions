/* for any 3 digit number chech whether its an armstrong number or not armstrong number is a number
that is equal to the sum of cube of its digits eg; 371 is the an armstrong number .*/
#include <iostream>
using namespace std;
int main(){
    int a=153,n,dig1,dig2,dig3,sumcube;
    n=a;
    dig1=n%10;
    n=n/10;
    dig2=n%10;
    n=n/10;
    dig3=n%10;

    sumcube=dig1*dig1*dig1+dig2*dig2*dig2+dig3*dig3*dig3;
    if(sumcube==a){
        cout<<"its armstrong"<<" "<<sumcube<<endl;
    }else{
        cout<<"its not"<<endl;
    }
    return 0;
}