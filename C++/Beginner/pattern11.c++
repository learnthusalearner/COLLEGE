//    1
//   121
//  12321

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n:";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        int count=1;
        for (int j = 1; j <= i; j++) {
            cout << count++;
        }
        int m=i-1;
        for (int j = 1; j <i; j++) {
            cout << m--;
        }

        cout << endl;
    }
}
