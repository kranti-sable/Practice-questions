/* write function to check if a number is 
a palindrome in C++ */
#include <iostream>
using namespace std;
bool palin(int n){
    int res=0;
    int a=n;
    while(n>0){
        int lastdig=n%10;
        res=res*10+lastdig;
        n/=10;
    }
    return res==a;
    }
    int main(){
      if(palin(212)){
        cout<<"its palindrom";
    }else{
        cout<<"not palindrom";
    }
        return 0;
    }
    
