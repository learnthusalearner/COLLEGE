#include <iostream>
using namespace std;

int stair(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    int ans = stair(n - 1) + stair(n - 2);

    return ans;
}
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        int ans = stair(i);
        cout << ans << " ";
        sum = sum + ans;
    }
    cout << endl;
    cout << sum;
}
