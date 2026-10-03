#include<iostream>
using namespace std;
int main(){
    int N=5;
    int sum=0;
    cout<<"list of even no.s:";
    for(int i=1;i<=N;i++){
         sum=sum+i;
        if(i%2==0){
            cout<<i<<",";
        }
    }
    cout<<"\nsum of total nums="<<sum<<endl;
}