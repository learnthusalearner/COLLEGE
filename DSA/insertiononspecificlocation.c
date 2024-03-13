#include<stdio.h>
int main(){

int a[50],size,num,pos;

printf("enter the size of element : ");
scanf("%d",&size);

printf("the given elements of array : \n");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}

printf("the given elements of array : \n");
for(int i=0;i<size;i++){
    printf("%d",a[i]);
}

printf("\ndata need to be inserted : ");
scanf("%d",&num);

printf("enter position : \n");
scanf("%d",&pos);

if(pos<=0 || pos>size+1){
    printf("invalid ");
}else{
    for(int i=size-1;i>=pos-1;i--){
       a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
}


printf("the given array is : ");
for(int i=0;i<size;i++){
printf("%d",a[i]);
}

}