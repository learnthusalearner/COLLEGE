#include<Stdio.h>
int main() {
       for(int i =1;i<=6;i++){ //rows
        for(int j =6;j>i;j--){ //columns
                printf(" ");
        }    
            for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }

}

    
    

