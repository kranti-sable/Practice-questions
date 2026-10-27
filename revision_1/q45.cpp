#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int missingNum(vector<int> num){
    int sumofrange=num.size();
    int sumofnum=0;
    int ans;
    for(int i=0;i<num.size();i++){
        sumofrange+=i;
        sumofnum+=num[i];
    }
    ans=sumofrange-sumofnum;
    return ans;
}
int main(){
    vector<int> num={4,1,2,0};
    cout<<missingNum(num)<<endl;
    
}