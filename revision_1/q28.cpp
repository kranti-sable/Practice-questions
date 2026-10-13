#include<iostream>
#include<string>
using namespace std;
bool isvalid(char ch){
    if((ch>='a' && ch <= 'z')|| 
    (ch >= 'A' && ch <= 'Z')||
    (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}
char toLowerCase(char ch){
    if(ch>= 'A' && ch<='Z'){
        return ch -'A'+'a';
    }
    return ch;
}
bool checkPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        if (toLowerCase(s[start]) != toLowerCase(s[end])) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    
string temp = "";
for (int i = 0; i < s.length(); i++) {
    if (isvalid(s[i])) {
        temp.push_back(toLowerCase(s[i]));
    }
}
    if(checkPalindrome(temp)){
        cout<<"is palindrome"<<endl;
    }else{
        cout<<"not palindrome"<<endl;
    }

}