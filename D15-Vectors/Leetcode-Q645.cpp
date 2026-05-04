#include<iostream>
#include<vector>
using namespace std;
vector<int> print(vector<int> arr){
    vector<int> ans;
     int freq [arr.size()+1]={0};
   for(int i=0;i<arr.size();i++){
    freq[arr[i]]++;
   }
   for(int i=1;i<arr.size()+1;i++){
    if(freq[i]==2){
        ans.push_back(i);
    }
    if(freq[i]==0){
        ans.push_back(i);
        }
   }
   cout<<endl;
   return ans;
}
int main(){
    vector<int> arr={1,2,2,4};
    vector<int>result=print(arr);
    cout<<result[0]<<" "<<result[1];
   return 0;
}