/*write a function which takes 2 number as parameter (a&b)and output 
a'2+b'2+2ab */
#include <iostream>
using namespace std;
int sq(int a,int b){
    int sqsum=a*a+b*b+2*a*b;
    return sqsum;
}
int main(){
    cout<<"sum="<<sq(1,1)<<endl;
}
