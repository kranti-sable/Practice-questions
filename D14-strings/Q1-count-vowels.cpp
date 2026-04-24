//Q-count how many times lowercase vowels occurred in string entered by user.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str="aejkovid";
    int count =0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
           count++;
        }
    }
    cout<<count<<endl;
    return 0;
}