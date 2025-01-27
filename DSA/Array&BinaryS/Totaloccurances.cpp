
#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            high=mid-1;//By setting high = mid - 1, we restrict the search to the left of the current mid, effectively narrowing down the search space to find earlier occurrences of the key.
        }
        else if(arr[low]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int LastOccurance(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int ans=-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[low]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,3,5,9,9,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    cout << LastOccurance(arr, n, key)-firstOccurance(arr, n, key) +1 << endl;
}