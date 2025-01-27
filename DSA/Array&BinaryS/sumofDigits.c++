//sum of digits of a number
#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int lastDigit=n%10;
        sum=sum+lastDigit;
        n=n/10;
    }
    return sum;
}
int main(){
    cout << "Sum of digits: " << sumOfDigits(143) << endl;
    return 0;
}
