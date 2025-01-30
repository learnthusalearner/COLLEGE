#include <iostream>
#include <string>
#include <algorithm>
  
using namespace std;

string reverseWords(string& str) {
    reverse(str.begin(), str.end());

    int start = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == '.' || str[i] == '\0') {//it says that if the string is "." or "\0" then reverse the specific word 
            reverse(str.begin() + start, str.begin() + i);//if i dont do this This line is incorrect. It tries to reverse the string from the beginning to the beginning
            start = i + 1;
        }
    }
    return str;
}
//here what happend is in the beginning i have already reversed the string as usual but when i am iterating the string i am checking if the string is "." or "\0" then i am reversing the specific word
int main() {
    string s = "..my..name.is.khan";
    cout << reverseWords(s) << endl; 
    return 0;
}