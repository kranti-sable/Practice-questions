#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> print(vector<int>nums){
    vector<int>ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i>0&&nums[i]==nums[i-1])continue;
        int j=i+1,k=nums.size()-1;
        while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                j++;
                k--;
    while(j<k&&nums[j]==nums[j-1])j++;
    while(j<k&&nums[k]==nums[k+1])k--;
        }else if(nums[i]+nums[j]+nums[k]<0){
         j++;
    }else{
        k--;
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