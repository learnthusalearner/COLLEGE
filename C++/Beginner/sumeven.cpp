#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0; 
    cout << "Enter the upper limit (positive integer): ";
    cin >> n;

    for (int i = 0; i <= n; i += 2) {
        sum =sum+ i;
    }

    cout << "The sum of all even numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
