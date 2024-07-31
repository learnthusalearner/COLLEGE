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
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i+1; j++) {
            cout <<j;
        }
        for (int j = 1; j <=(i-1)*2; j++) {
            cout <<"*";
        }
        for (int j =n-i+1; j >=1; j--) {
            cout <<j;
        }
        

        cout << endl;
    }
}
