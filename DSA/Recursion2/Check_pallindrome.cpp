#include <bits/stdc++.h>
using namespace std;

bool check_Pallindrome(string str, int i, int j) {
    if (i >= j) return true; // Base case: If i crosses or meets j, it's a palindrome
    if (str[i] != str[j]) return false; // If characters don't match, it's not a palindrome
    return check_Pallindrome(str, i + 1, j - 1); // Recursive call with updated indices
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << boolalpha << check_Pallindrome(str, 0, str.length() - 1); // Corrected initial call
    return 0;
}