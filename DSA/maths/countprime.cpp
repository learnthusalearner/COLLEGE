#include <iostream>
using namespace std;

int no_of_prime(int n)
{
    if (n <= 1) return 0;
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    int ans = no_of_prime(n);
    cout << ans << endl;
}