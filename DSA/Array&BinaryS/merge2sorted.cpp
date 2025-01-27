#include<iostream>
#include<vector>
#include<set>
using namespace std;

int merge2sorted(int arr1[],int n1,int arr2[],int n2){
   set<int> set;

   for(int i=0;i<n1;i++){
       set.insert(arr1[i]);
   }
   for(int i=0;i<n2;i++){
       set.insert(arr2[i]);
   }
    for(int i: set){
        cout<<i<<" ";
    }
}

int main(){
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    merge2sorted(arr1,n1,arr2,n2);
    return 0;
}