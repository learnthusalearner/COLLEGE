#include <stdio.h>
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {//371
        remainder = originalNum % 10;//1
        
       result =result + remainder * remainder * remainder;//r=0+1*1*1=1=>r=1+7*7*7=344=>r=344+27=371
        
       // removing last digit from the orignal number
       originalNum=originalNum // 10=>7=>3
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
