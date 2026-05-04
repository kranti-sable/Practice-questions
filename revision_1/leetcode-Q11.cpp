#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int maxwater=0;
    int i=0,j=height.size()-1;
    while(i<j){
            int trappedwater=min(height[i],height[j])*(j-i);
            maxwater=max(maxwater,trappedwater);
            if(height[i]<height[j]){
            i++;
            }else{
            j--;
            }
    }
    cout<<maxwater<<endl;
    return 0;
}