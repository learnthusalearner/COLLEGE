#include <iostream>
#include <vector>
using namespace std;

void SieveOfEratosthenes(int n) {

    vector<bool> prime(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++) {
        if (prime[p])
            cout << p << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Prime numbers smaller than or equal to " << n << " are:\n";
    SieveOfEratosthenes(n);
    return 0;
}