/*Q--you are given two string s1 and s2 of enual length .a string swap is an operation where
 you choose two indices in string (not necessarily different) and swap the character these indices
example-- input: s1="bank",s2="kanb"
         output:ture  */
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s1="bank";
    string s2="kanb";
    int i1=-1,i2=-1,count=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            count++;
            if(count==1)i1=i;
            if(count==2)i2=i;
        }
    }
    if(count==0){
        cout<<"true"<<endl;
    }
    else if(count==2){
        if(s1[i1]==s2[i2] && s1[i2]==s2[i1]){
            cout<<"true"<<endl;
        }else{
            cout<<"false"<<endl;
        }
    }
    return 0;
}