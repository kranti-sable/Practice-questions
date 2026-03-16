//write a function that print the largest of 3 num.
#include <iostream>
using namespace std;
int num(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
         return b;
    }else{
        return c;
    }
}
int main(){
    cout<<num(4,11,6)<<endl;
}