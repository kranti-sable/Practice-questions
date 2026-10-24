#include<iostream>
#include<vector>
using namespace std;
int findSingleNum(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,4,2,1};
    cout<<findSingleNum(arr)<<endl;
    
}