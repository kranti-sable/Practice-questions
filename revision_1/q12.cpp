#include <iostream>
using namespace std;

int main() {
    int binNum = 1011;
    int ans = 0;
    int pow = 1;

    while (binNum > 0) {
        int rem =binNum%10;
        ans=ans +(rem*pow);
        pow=pow*2;
        binNum = binNum / 10; 
    }

    cout << "Decimal: " << ans << endl;
    return 0;
}