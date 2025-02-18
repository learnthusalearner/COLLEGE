#include <iostream>
using namespace std;

bool isPresent(int arr[2][3], int target, int &row, int &col) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == target) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[2][3]; // 2 Rows and 3 Columns

    // taking input
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int row, col;
    if (isPresent(arr, target, row, col)) {
        cout << "Element found at index (" <<"row:"<< row << ","<<"colomn:" << col << ")." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}