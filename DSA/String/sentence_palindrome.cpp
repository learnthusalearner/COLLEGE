#include <iostream>
#include <string>
using namespace std;

bool sentencePalindrome(string &s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
//The isalnum() function returns a non-zero value (equivalent to boolean true) if a character is alphanumeric, meaning an alphabet letter (a-z) or a number (0-9)
        if (!isalnum(s[i]))
            i++;

        else if (!isalnum(s[j]))
            j--;

        else if (tolower(s[i]) == tolower(s[j]))
            i++, j--;

        else
            return false;
    }
    return true;
}

int main()
{
    string s = "Too hot to hoot.";

    cout << (sentencePalindrome(s) ? "True" : "False") << endl;
    return 0;
}