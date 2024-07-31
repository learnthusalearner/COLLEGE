// 1
// 2 3 
// 4 5 6

#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cout<<"n:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<++count;
        }
            cout<<endl;
    }
}

