//32.Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c,n;
    printf("Input angle of triangle. \n");
    scanf("%d%d%d",&a,&b,&c);
    n = a + b + c;
    if(n == 180){
        printf("Triangle is valid.\n");
    }
    else{
        printf("The Triangle is invalid.\n");
    }
    return 0;
}
