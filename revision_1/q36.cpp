#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int> &nums){
    int insertPos=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[insertPos]=nums[i];
            insertPos++;
        }
    }
    for(int i=insertPos;i<nums.size();i++){
        nums[i]=0;
    }
}
int main(){
    vector<int> nums={5,0,9,0};
    moveZeros(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}