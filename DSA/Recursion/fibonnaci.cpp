#include<iostream>
using namespace std;

int fibonnaci(int n){

    if(n==0) return 0;

    if(n==1) return 1;

    // int ans=fibonnaci(n-1)+fibonnaci(n-2);

    return fibonnaci(n-1)+fibonnaci(n-2);
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int ans=fibonnaci(i);
        cout<<ans<<" ";
    }
    return 0;
}

