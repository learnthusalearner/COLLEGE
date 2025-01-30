#include <bits/stdc++.h>
using namespace std;

// Function to recursively remove adjacent duplicates
string rremove(string s) {
    // Create an empty string to build the result
    string sb = "";  

    // Iterate over the length of current string
    for (int i = 0; i < s.size(); i++) {
        bool repeated = false;

        // Check if the current character is the same
        // as the next one
        while (i+1 < s.size() && s[i] == s[i + 1]) {
            repeated = true;  // Mark as repeated
            // Skip the next character
            // since it's a duplicate
            i++;  
        }

        // If the character was not repeated,
        // add it to the result string
        if (!repeated) sb = sb + s[i];
        //remember that repeated should be false
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

/*
Dry Run:
First Call to rremove("abbaca"):
Initialize an empty string sb = "".

Iterate over the string s = "abbaca":

i = 0:

s[i] = 'a'.

Check if s[i] == s[i+1] ('a' == 'b'): No.

Add 'a' to sb.

sb = "a".

i = 1:

s[i] = 'b'.

Check if s[i] == s[i+1] ('b' == 'b'): Yes.

Set repeated = true.

Skip the next character by incrementing i to 2.

i = 2:

s[i] = 'b'.

Check if s[i] == s[i+1] ('b' == 'a'): No.

Since repeated is true, do not add 'b' to sb.

Reset repeated = false.

i = 3:

s[i] = 'a'.

Check if s[i] == s[i+1] ('a' == 'c'): No.

Add 'a' to sb.

sb = "aa".

i = 4:

s[i] = 'c'.

Check if s[i] == s[i+1] ('c' == 'a'): No.

Add 'c' to sb.

sb = "aac".

i = 5:

s[i] = 'a'.

Check if s[i] == s[i+1]: No (end of string).

Add 'a' to sb.

sb = "aaca".

After the loop, sb = "aaca".

Compare the length of s and sb:

s.size() = 6, sb.length() = 4.

Since they are not equal, recursively call rremove("aaca").

Second Call to rremove("aaca"):
Initialize an empty string sb = "".

Iterate over the string s = "aaca":

i = 0:

s[i] = 'a'.

Check if s[i] == s[i+1] ('a' == 'a'): Yes.

Set repeated = true.

Skip the next character by incrementing i to 1.

i = 1:

s[i] = 'a'.

Check if s[i] == s[i+1] ('a' == 'c'): No.

Since repeated is true, do not add 'a' to sb.

Reset repeated = false.

i = 2:

s[i] = 'c'.

Check if s[i] == s[i+1] ('c' == 'a'): No.

Add 'c' to sb.

sb = "c".

i = 3:

s[i] = 'a'.

Check if s[i] == s[i+1]: No (end of string).

Add 'a' to sb.

sb = "ca".

After the loop, sb = "ca".

Compare the length of s and sb:

s.size() = 4, sb.length() = 2.

Since they are not equal, recursively call rremove("ca").

Third Call to rremove("ca"):
Initialize an empty string sb = "".

Iterate over the string s = "ca":

i = 0:

s[i] = 'c'.

Check if s[i] == s[i+1] ('c' == 'a'): No.

Add 'c' to sb.

sb = "c".

i = 1:

s[i] = 'a'.

Check if s[i] == s[i+1]: No (end of string).

Add 'a' to sb.

sb = "ca".

After the loop, sb = "ca".

Compare the length of s and sb:

s.size() = 2, sb.length() = 2.

Since they are equal, return sb = "ca".

Result:
The final result after all recursive calls is "ca".

Output:
ca

*/