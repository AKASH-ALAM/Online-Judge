//34.Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Input triangle sides.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a == b && b == c){
        printf("Equilateral triangle.\n");
    }
    else if(a == b||a == c||b == c){
        printf("Isosceles triangle.\n");
    }
    else{
        printf("Scalene triangle.\n");
    }


}
