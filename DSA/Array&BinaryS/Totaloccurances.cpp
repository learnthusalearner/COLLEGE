
#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key){
    int st=0;
    int end=n-1;
    int ans=-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(arr[mid]==key){
            ans=mid;
            end=mid-1;//By setting end = mid - 1, we restrict the search to the left of the current mid, effectively narrowing down the search space to find earlier occurrences of the key.
        }
        else if(arr[st]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int LastOccurance(int arr[],int n,int key){
    int st=0;
    int end=n-1;//7
    int ans=-1;

    while(st<=end){
        int mid=(st+end)/2;//3  5  6            

        if(arr[mid]==key){//arr[3]==9 T  arr[5]==9 T    arr[6]!=9 F i.e  k<
            ans=mid;//3  5
            st=mid+1;//4  6
        }
        else if(arr[st]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[]={1,3,5,9,9,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    cout << LastOccurance(arr, n, key)<< endl;
}