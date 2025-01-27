#include <bits/stdc++.h>
using namespace std;

// Function to recursively remove adjacent duplicates
string rremove(string s) {
    // Create an empty string to build the result
    string sb = "";  

    // Iterate over the length of current string
    for (int i = 0; i < s.size(); i++) {
        bool repeated = false;

        // Check if the current characteris the same
        // as the next one
        while (i + 1 < s.size() && s[i] == s[i + 1]) {
            repeated = true;  // Mark as repeated
          
            // Skip the next character
            // since it's a duplicate
            i++;  
        }

        // If the character was not repeated,
        // add it to the result string
        if (!repeated) sb += s[i];
    }

    // If no changes made, return the result string
    if (s.size() == sb.length())
        return sb;
    
    // Otherwise, recursively call the function 
    // to check for more duplicates
    return rremove(sb);
}

int main() {
    string s = "abbaca";  
    string result = rremove(s);  
    cout << result << endl;
    
    return 0;
}