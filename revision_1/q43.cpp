#include<iostream>
#include<vector>
using namespace std;
void countBits(int n) {
    vector<int> ans;
    for (int i = 0; i <= n; i++) {
        int count = 0;
        int num = i; // use a copy so 'i' is not corrupted
        while (num > 0) {
            num = num & (num - 1);
            count++;
        }
        ans.push_back(count);
    }

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;
}
int main(){
    int n=5;
    countBits(n);

}