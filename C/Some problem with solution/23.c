//23.Write a C program to check whether a number is even or odd.

#include <stdio.h>
int main()
{
    int a;
    printf("Please Enter a Number: \n");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("The Number is Even: \n");
    }
    else{
        printf("The Number is Odd: \n");
    }
    return 0;
}
