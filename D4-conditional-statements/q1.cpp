/* Build a calculator using if-else for the 4 basic arithmetic opertion(+,-,*,/)*/
#include <iostream>
using namespace std;
int main(){
    int a=10,b=5;
    char op='*';
    if(op=='+'){
        cout<<"a+b="<<a+b<<endl;
    }else if(op=='-'){
        cout<<"a-b="<<a-b<<endl;
    }else if(op=='*'){
        cout<<"a*b="<<a*b<<endl;
    }else if (op=='/'){
        cout<<"a/b="<<a/b<<endl;
    }else{
        cout<<"invalid"<<endl;
    }
    return 0;
}
