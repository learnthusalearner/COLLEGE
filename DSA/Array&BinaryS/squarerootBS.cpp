#include <iostream>
using namespace std;

int BS(int n) {
    int start = 0;
    int end = n;
    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (mid * mid == n)
            return mid;
        if (mid * mid < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n = 5;
    int result = BS(n);
    cout << "The integer square root of " << n << " is: " << result << endl;
    return 0;
}