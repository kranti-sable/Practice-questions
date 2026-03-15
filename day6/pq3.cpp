/*print the palindromic pattren with numbers.n=5
    1
   212
  32123
 4321234
543212345 */
#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=1;i<=n;i++){
        //space
         for(int j=1;j<=(n-i);j++){
            cout<<" ";
         }
        //num
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            for (int j=2;j<=i;j++){
                cout<<j;
            }
         cout<<endl;
        }
        return 0;
    }
