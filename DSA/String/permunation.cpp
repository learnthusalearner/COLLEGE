#include <bits/stdc++.h>
using namespace std;

    bool solve(string s,string s1){
        sort(s.begin(),s.end());
        sort(s1.begin(),s1.end());
        return s==s1;
    }
    bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1>n2) return false;
        int i=0;
        while(i<=n2-n1){//sliding window 1st window 1 to 6 then 2 to 7 and so on
            string s=s2.substr(i,s1.size());//Extract substring of length s1.size() i.e 2 here
            if(solve(s,s1)) return true;  
            i++;
        }
        return 0;
    }

int main() {
    cout << boolalpha << checkInclusion("ab", "eidbaooo");
    return 0;
}

/*
Input:
s1 = "ab"
s2 = "eidbaooo"

Initial Setup:
n1 = s1.size() = 2
n2 = s2.size() = 8

Since n1 <= n2, the function proceeds.

Sliding Window Loop:
The loop runs from i = 0 to i <= n2 - n1 (i.e., i <= 6).

Iteration 1: 
i = 0
Extract Substring:
s = s2.substr(0, 2) = "ei"
Check Permutation:
Call solve("ei", "ab"):
Sort "ei" → "ei"
Sort "ab" → "ab"
"ei" != "ab" → Return false.
Result:
No match. Move to the next window.

Iteration 2: 
i = 1
Extract Substring:
s = s2.substr(1, 2) = "id"
Check Permutation:
Call solve("id", "ab"):
Sort "id" → "di"
Sort "ab" → "ab"
"di" != "ab" → Return false.
Result:
No match. Move to the next window.

Iteration 3:
 i = 2
Extract Substring:
s = s2.substr(2, 2) = "db"
Check Permutation:
Call solve("db", "ab"):
Sort "db" → "bd"
Sort "ab" → "ab"
"bd" != "ab" → Return false.
Result:
No match. Move to the next window.

Iteration 4:
i = 3
Extract Substring:
s = s2.substr(3, 2) = "ba"
Check Permutation:
Call solve("ba", "ab"):
Sort "ba" → "ab"
Sort "ab" → "ab"
"ab" == "ab" → Return true.

Result:
Match found! Return true.

Final Output:
true
*/