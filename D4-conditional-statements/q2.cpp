/* Write a C++ program to get a number from the user and 
print whether its positive ,negative or zero.*/
#include <iostream>
using namespace std;
int main(){
    int a=0;
    if(a>0){
        cout<<"positive digit"<<endl;
    }else if (a<0){
        cout<<"negative digit"<<endl;
    }else{
        cout<<"zero"<<endl;
    }
    return 0;
}