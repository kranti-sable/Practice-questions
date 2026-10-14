#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t) {
    // 0. If lengths don't match, impossible to be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    // 1. Array of size 26 initialized with 0
    int count[26] = {0};

    // 2. Count frequencies of s
    for (int i = 0; i < s.length(); i++) {
        count[s[i] - 'a']++;
    }

    // 3. Subtract frequencies of t
    for (int i = 0; i < t.length(); i++) {
        count[t[i] - 'a']--;
    }

    // 4. Verify all 26 boxes are back to 0
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t)) {
        cout << "Valid Anagram" << endl;
    } else {
        cout << "Not an Anagram" << endl;
    }

    return 0;
}