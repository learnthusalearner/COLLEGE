#include <iostream>
using namespace std;

int BS_temp_solution(int n) {//5   2
    int start = 0;
    int end = n;//5   2
    int ans = -1;
    while (start <= end) {
        int mid = (start + end) / 2;//2  1
        if (mid * mid == n)//2x2 4=5 F   1x1 1=2 F
            return mid;
        if (mid * mid < n) { //2x2 4<5 T  1x1 1<2
            ans = mid;//2   1
            start = mid + 1;//3   1
        } else {              // 
            end = mid - 1;
        }
    }
    return ans;
}

double BSaccurate(int n, int precise, int temp_solution) {
    double ans = temp_solution;
    double factor = 1;

    for (int i = 0; i < precise; i++) {
        factor = factor / 10;
        for (double j = ans; j * j <= n; j =j + factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n = 8;
    int temp_solution = BS_temp_solution(n);
    cout<<temp_solution<<endl;
    double result = BSaccurate(n, 3, temp_solution);
    cout << "The square root of " << n << " with precision is: " << result << endl;
    return 0;
}