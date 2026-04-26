/*Two strings are considered close if you can attain one from the other using the following operations:
Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.
Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.  */
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
bool closestrings(string s1,string s2){
    if(s1.length()!=s2.length()){
        cout<<"false"<<endl;
        return false;
    }
    int freq1[26]={0};
    for(int i=0;i<s1.length();i++){
        int idx1=s1[i]-'a';
        freq1[idx1]++;
    }
    int freq2[26]={0};
    for(int i=0;i<s2.length();i++){
        int idx2=s2[i]-'a';
        freq2[idx2]++;
    }
    for(int i=0;i<26;i++){
        if(freq1[i]==0 && freq2[i]!=0){
            return false;
        }
        if(freq1[i]!=0 && freq2[i]==0){
            return false;
        }
    }
    sort(freq1,freq1+26);
    sort(freq2,freq2+26);
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s1="aab";
    string s2="aba";
    closestrings(s1,s2);
    cout<<closestrings(s1,s2)<<endl;
}