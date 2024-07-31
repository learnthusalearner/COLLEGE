// A B C
// A B C
// A B C

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"n: ";
    cin>>n;
    
    int ch=64;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(++ch);
        }
            cout<<endl;
    }
}

