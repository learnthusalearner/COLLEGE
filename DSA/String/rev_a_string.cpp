#include <bits/stdc++.h>
using namespace std;

string reverseString(string &s) {
    int left = 0;
    int right = s.length() - 1;
    while (left < right) {
        swap(s[left++], s[right--]);
    }
    return s;
}

int main() {
    string s = "hello";
    cout << reverseString(s)<<endl;
    
    return 0;
}