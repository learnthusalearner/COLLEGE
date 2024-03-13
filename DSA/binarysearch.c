#include<stdio.h>
int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
    mid=((low+high)/2); //important to remember
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else {
        high=mid-1;
    }
 }
 return 0;
}
int main(){
    int arr[]={1,3,5,56,64,73,123,225,444};
    int size=sizeof(arr)/sizeof(int);
    int element=444;
    int searchindex=binarysearch(arr,size,element);
    printf("the element %d was found at %d index \n",element,searchindex);
    return 0;
}














