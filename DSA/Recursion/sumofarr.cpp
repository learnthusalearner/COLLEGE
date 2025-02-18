
#include <iostream>
using namespace std;

int sum_of_arr(int arr[], int size)
{
    if(size==0) return 0;
    if(size==1) return arr[0];
    int temp = arr[0];
    temp = temp + sum_of_arr(arr+1,size-1);
    return temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size=sizeof(arr)/sizeof(arr[0]);

    int ans=sum_of_arr(arr,size);
    cout<<ans<<endl;
}