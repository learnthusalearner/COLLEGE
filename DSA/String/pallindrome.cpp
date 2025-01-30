#include <iostream>
#include <string>
using namespace std;

bool palindrome(string &s)
{
    int st = 0;
    int end = s.length() - 1;

    while (st < end)
    {
        if (s[st++] != s[end--])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "nooooooon";
    cout << boolalpha << palindrome(s) << endl; 
    return 0;
    
}
// Output: true