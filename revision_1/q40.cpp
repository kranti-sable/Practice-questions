#include<iostream>
#include<vector>
using namespace std;
bool powerOf2(int n){
    if(n<=0){
        return false;
    }
 if((n & (n-1))==0){
    return true;
 }else{
    return false;
 }
}
int main(){
    int n=7;
    if(powerOf2(n)){
        cout<<"ture"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}