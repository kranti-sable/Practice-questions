#include<iostream>
#include<string>
using namespace std;
int tilingProblem(int n){
    if(n==0||n==1){
        return 1;
    }
    int way1=tilingProblem(n-1);
    int way2=tilingProblem(n-2);
    return way1+way2;
}
void removeDuplicates(string str,string ans,int idx,bool map[26]){
    if(idx==str.size()){
        cout<<ans<<endl;
        return;
    }
    int currChar=str[idx]-'a';
    if(map[currChar]){
        removeDuplicates(str,ans,idx + 1, map);
    }else{
        map[currChar]=true;
        removeDuplicates(str,ans+str[idx],idx+1,map);
    }
}
int main(){
    cout<<"Tiling (4):"<<tilingProblem(4)<<endl;
    string str="apple";
    string ans="";
    bool map[26]={false};
    removeDuplicates(str, ans, 0, map);
}