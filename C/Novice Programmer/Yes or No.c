#include <stdio.h>
#include <ctype.h>
int main(){
    char ch; int radius; double area , pi = 3.14156;
    printf("Do you want to calculate area? (y/n): ");
    ch = getchar();
    ch = toupper(ch);
    while(ch != 'N'){
        printf("What's your Radius?: ");
        scanf("%d", &radius);
        area = pi*radius*radius;
        printf("Area of a circle is : %.2lf\n", area);
        ch = '\0';
        printf("Do you want to calculate area? (y/n): ");
        getchar();
        ch = toupper(ch);
    }
    return 0;
}