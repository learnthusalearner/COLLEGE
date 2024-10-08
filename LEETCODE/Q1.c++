// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside
// the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
    int ans = 0;
    int rev = 0;
    bool isneg = false;
    if (x <= INT_MIN)
    {
        return 0;
    }
    if (x < 0)
    {
        isneg = true;
        x = -x;
    }
    while (x != 0)
    {
        if (ans > INT_MAX / 10)//int max/10 is done because int can store the value*10 in 28th line
        {
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }
    return isneg ? -ans : ans;
}
int main()
{
    int reversednum = reverse(123);
    cout << reversednum << endl;
}
