#include<iostream>
#include<vector>
using namespace std;
vector<int> print(vector<int>nums){
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<int>result=print(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}