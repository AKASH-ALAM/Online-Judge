//20.Write a C program to find maximum between three numbers.
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three number:\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a > b && a > c){
        printf("The maximum number is: %.2f\n",a);
    }
    else if(b > a && b > c){
        printf("The maximum number is: %.2f\n",b);
    }
    else{
        printf("The maximum number is: %.2f\n",c);
    }
    return 0;
}
