#include<iostream>
using namespace std;

int counting(int n){
    if(n==1) return 1;
    cout<<n<<" ";
    return counting(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=counting(n);
    cout<<ans<<" "<<endl;
}

