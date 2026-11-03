#include<iostream>
using namespace std;
int friendPairing(int n){
    if(n==1 || n==2){
        return n;
    }
    int single= friendPairing(n-1);
    int pairup=(n - 1) *friendPairing(n-2);
    int total=single+pairup;
    return total;
}
int main(){
    cout<<friendPairing(3)<<endl;
}