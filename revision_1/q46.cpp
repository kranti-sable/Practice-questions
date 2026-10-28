#include<iostream>
#include<vector>
using namespace std;
int sumofnum(int a,int b){
    while(b!=0){
    int carry = (unsigned int)(a & b) << 1;
     a = a ^ b;
     b = carry;
    }
    return a;
}
int main(){
    int a=2;
    int b=3;
    cout << sumofnum(a, b) << endl;
}