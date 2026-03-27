//what will be the output of code .
#include<iostream>
using namespace std;
int main(){
    int a=32;
    int *ptr=&a;
    char ch='A';
    char &cho=ch;

    cho+=a;
    *ptr+=ch;
    cout <<a<<","<<ch<<endl;//129,a
    return 0;
}