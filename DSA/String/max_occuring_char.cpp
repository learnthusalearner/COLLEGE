#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(string str)
{
    unordered_map<char, int> ump; // Create an unordered_map to store character frequencies
    char ans; // Variable to store the result (max occurring character)
    int count = 0; // Variable to store the frequency of the max occurring character

    // Iterate through the string
    for (int i = 0; i < str.length(); i++) {
        ump[str[i]]++; // Increment the frequency of the current character
        if (count < ump[str[i]]) { // Check if this character's frequency is the highest so far
            ans = str[i]; // Update the result character
            count = ump[str[i]]; // Update the max frequency
        }
    }
    return ans ; // Return the max occurring character
}

int main()
{
	string str = "sample string";
	cout << "Max occurring character is: "<< getMaxOccurringChar(str);
}

/*
Let’s iterate through the loop in getMaxOccurringChar for the string "sample string".

Initial State:
ump is empty: {}
ans is uninitialized.
count = 0

Iteration 1: 
i = 0, str[i] = 's'
ump['s']++: ump becomes {'s': 1}
count < ump['s'] (0 < 1): Update ans = 's', count = 1

Iteration 2:
 i = 1, str[i] = 'a'
ump['a']++: ump becomes {'s': 1, 'a': 1}
count < ump['a'] (1 < 1): No update

Iteration 3: 
i = 2, str[i] = 'm'
ump['m']++: ump becomes {'s': 1, 'a': 1, 'm': 1}
count < ump['m'] (1 < 1): No update

Iteration 4:
 i = 3, str[i] = 'p'
ump['p']++: ump becomes {'s': 1, 'a': 1, 'm': 1, 'p': 1}
count < ump['p'] (1 < 1): No update

Iteration 5:
 i = 4, str[i] = 'l'
ump['l']++: ump becomes {'s': 1, 'a': 1, 'm': 1, 'p': 1, 'l': 1}
count < ump['l'] (1 < 1): No update

Iteration 6:
 i = 5, str[i] = 'e'
ump['e']++: ump becomes {'s': 1, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1}
count < ump['e'] (1 < 1): No update

Iteration 7:
 i = 6, str[i] = ' ' (space)
ump[' ']++: ump becomes {'s': 1, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1}
count < ump[' '] (1 < 1): No update

Iteration 8: i = 7, str[i] = 's'
ump['s']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1}
count < ump['s'] (1 < 2): Update ans = 's', count = 2

Iteration 9:
 i = 8, str[i] = 't'
ump['t']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1}
count < ump['t'] (2 < 1): No update

Iteration 10:
 i = 9, str[i] = 'r'
ump['r']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1, 'r': 1}
count < ump['r'] (2 < 1): No update

Iteration 11:
 i = 10, str[i] = 'i'
ump['i']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1, 'r': 1, 'i': 1}
count < ump['i'] (2 < 1): No update

Iteration 12:
 i = 11, str[i] = 'n'
ump['n']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1, 'r': 1, 'i': 1, 'n': 1}
count < ump['n'] (2 < 1): No update

Iteration 13: 
i = 12, str[i] = 'g'
ump['g']++: ump becomes {'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1, 'r': 1, 'i': 1, 'n': 1, 'g': 1}
count < ump['g'] (2 < 1): No update

Final State:
ump contains the frequency of each character in the string:

Copy
{'s': 2, 'a': 1, 'm': 1, 'p': 1, 'l': 1, 'e': 1, ' ': 1, 't': 1, 'r': 1, 'i': 1, 'n': 1, 'g': 1}
ans = 's' (the character with the highest frequency, which is 2).

count = 2 (the frequency of 's').

Output:
Copy
Max occurring character is: s
*/