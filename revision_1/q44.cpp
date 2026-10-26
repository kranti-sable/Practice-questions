#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int missingNum(vector<int> num){
    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
        if ((num[i] ^ i) != 0) {
            return i;
        }
    }
    return num.size();

}
int main(){
    vector<int> num={4,1,2,0};
    cout<<missingNum(num)<<endl;
    
}