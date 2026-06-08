#include<iostream>
using namespace std;
int fastExpo(int x,int n,int mod){
    int ans=1;
    while (n>0){
        int lastBit=n & 1;
        if(lastBit){
            ans=(ans*x)%mod;
        }
        x=(x*x)%mod;
        n=n>>1;
    }
    return ans;
}
int main(){
    int n=4;
    int mod=1000000007;
    int evenCount=(n+1)/2;
    int oddCount=n/2;
    long long ans=fastExpo(5,evenCount,mod)*fastExpo(4,oddCount,mod)%mod;
    cout<<ans<<endl;
    return 0;
}