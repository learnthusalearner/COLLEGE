#include <iostream>
#include <string>
#include <algorithm>
  
using namespace std;

string reverseWords(string& str) {
    reverse(str.begin(), str.end());

    int start = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '.' || str[i] == '\0') {
            reverse(str.begin() + start, str.begin() + i);//"+st and +i" is for maing the words non-rev
            start = i + 1;
        }
    }
    return str;
}

int main() {
    string s = "..my..name.is.khan";
    cout << reverseWords(s) << endl; 
    return 0;
}