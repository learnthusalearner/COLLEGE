// 111
//  22
//   3

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"n:";
    cin>>n;
    
    for(int i=1;i<=n;i++){ 
         for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

