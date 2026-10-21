#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int> & nums){
    if (nums.empty()) return 0;
    int insertIndex=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[insertIndex]=nums[i];
            insertIndex++;
        }
    }
    return insertIndex;
}
int main(){
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k=removeDuplicates(nums);
    cout<<"number of unique elements:"<<k<<endl;
    cout << "Unique elements in nums: ";
for (int i = 0; i < k; i++) {
    cout << nums[i] << " ";
}
cout << endl;

    return 0;
}