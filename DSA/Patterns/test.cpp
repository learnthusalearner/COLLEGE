#include <iostream>
using namespace std;

void printXPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' if it's on the primary or secondary diagonal
            if (i == j || i + j == n-1) {
                cout << "*";
            } else {
                cout << " "; // Print space otherwise
            }
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int size;
    cout << "Enter the size of the X pattern: ";
    cin >> size;

    printXPattern(size);

    return 0;
}