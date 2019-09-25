#include <stdio.h>
#define size 50
int main(){
    char ch, name[size]; int i;
    printf("Hello, please type your name. ");
    for(i = 0; (ch = getchar()) != '\n'; i++){
        name[i] = ch;
    } name[i] = '\0';
    printf("\n%s %s%s", "Nice to meet you", name, ".");
    
    printf("\nYour name spelled backward is : ");
    for(--i; i >= 0; --i){
        putchar(name[i]);
    }
    return 0;
}