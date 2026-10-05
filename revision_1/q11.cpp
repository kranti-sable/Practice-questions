#include<iostream>
using namespace std;
void swapValues(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10;
    int y=20;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    swapValues(x, y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}