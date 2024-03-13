#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"the given number is : ";
  cin>>n;

  int count=0;
  for (int i=1;i<=n;i++) {
    count++;
    n=n/10;
  }
  cout << "the number of digits are: " << count+1;
}
