#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int insertIndex = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[insertIndex]=nums[i];
                insertIndex++;
            }
        }
        return insertIndex;
    }
int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    int k = removeElement(nums, val);
    cout << "number of elements: " << k << endl;
    cout<<"nums={";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    cout<<"}"<<endl;
}