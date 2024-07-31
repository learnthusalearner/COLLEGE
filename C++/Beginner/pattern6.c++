// A A A
// B B B
// C C C

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(i+64);
        }
            cout<<endl;
    }
}

