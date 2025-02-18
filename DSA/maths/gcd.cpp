#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;

    // loop says jo bada ha usko minus kardo agar equal nhi ha
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }
    }
}
int main()
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    int ans = gcd(a, b);
    cout << ans << endl;
}