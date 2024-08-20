//  1234554321
//  1234**4321
//  123****321
//  12******21
//  1********1

#include <iostream>
using namespace std;

int main() {
    int n=5;

int x=1;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n-row+1; col++) {
            cout <<col;
        }
        for (int col = 1; col <=(row-1)*2; col++) {
            cout <<"*";
        }
        for (int col =n-row+1; col >=1; col--) {
            cout <<col;
        }
        

        cout << endl;
    }
}
