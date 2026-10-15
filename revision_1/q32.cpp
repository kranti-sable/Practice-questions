#include<iostream>
#include<vector>
using namespace std;
bool pairSum(vector<int> v, int target){
     int start=0,end=v.size()-1;
     while(start<end){
        int currentSum=v[start]+v[end];
        if (currentSum==target){
            return true;
        }
        else if(currentSum>target){
            end--;
        }else{
            start++;
        }
     }
     return false;
}
int main(){
    vector v={2, 7, 11, 15};
    int target=19;
    if (pairSum(v, target)) {
        cout << "Pair found!" << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}