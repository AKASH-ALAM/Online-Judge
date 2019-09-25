#include <stdio.h>
#define size 50
int main(){
    char ch, name[size]; int i = 0;
    
    while((ch = getchar()) != '\n'){
        name[i] = ch; i++;
    } name[i] = '\0';

    printf("%s\n", name);
    for(i--; i >= 0; i--){
        putchar(name[i]);
    }
    return 0;
}