#include <iostream>
using namespace std;

int sayDigit(int n)
{
    if (n == 0)
        return 0;

    int lastDigit = n % 10;
    switch (lastDigit)
    {
    case 1:
        cout << "ONE ";
        break;
    case 2:
        cout << "TWO ";
        break;
    case 3:
        cout << "THREE ";
        break;
    case 4:
        cout << "FOUR ";
        break;
    case 5:
        cout << "FIVE ";
        break;
    case 6:
        cout << "SIX ";
        break;
    case 7:
        cout << "SEVEN ";
        break;
    case 8:
        cout << "EIGHT ";
        break;
    case 9:
        cout << "NINE ";
        break;
    case 10:
        cout << "TEN ";
        break;
    default:
        cout << "Invalid choice";
        break;
    }
    int remainingDigits = n / 10;
    sayDigit(remainingDigits);
}
int main()
{
    int n;
    cin >> n;
    int ans = sayDigit(n);
    cout << ans;
}
