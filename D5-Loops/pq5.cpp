/*wap to find thr factorial of a number entered by user 
hint: factorial of number(n)=n*(n-1)*(n-2)*(n-3)*.........*1 
and exists for positive number only ,we write factorial as n!
so,factorial of 0!=1,1!=1,2!=2,3!=6,4!=24 and so on .
*/
#include <iostream>
using namespace std;
int main(){
    int i,n=4;
    long long f=1;
    if(n<0){
        cout<<"not factorial"<<endl;
    }else{
    for(int i=1;i<=n;i++){   
        f=f*i;
    }
}
        cout<<f<<endl;

    return 0;
}