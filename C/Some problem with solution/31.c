//31.Write a C program to count total number of notes in given amount.
#include <stdio.h>
int main()
{
    int a,th,fhu,hu,ft,tw,ten,f,two,one;
    printf("Enter any amount.\n");
    scanf("%d",&a);
    th = a / 1000;
    fhu = (a-(th*1000)) / 500;
    hu = (a-(th*1000)-(fhu*500)) / 100;
    ft = (a-(th*1000)-(fhu*500)-(hu*100)) / 50;
    tw = (a-(th*1000)-(fhu*500)-(hu*100)-(ft*50)) / 20;
    ten = (a-(th*1000)-(fhu*500)-(hu*100)-(ft*50)-(tw*20)) / 10;
    f = (a-(th*1000)-(fhu*500)-(hu*100)-(ft*50)-(tw*20)-(ten*10)) / 5;
    two = (a-(th*1000)-(fhu*500)-(hu*100)-(ft*50)-(tw*20)-(ten*10)-(f*5)) / 2;
    one = (a-(th*1000)-(fhu*500)-(hu*100)-(ft*50)-(tw*20)-(ten*10)-(f*5)-(two*2)) / 1;
    printf("1000 = %d\n 500 = %d\n 100 = %d\n 50 = %d\n 20 = %d\n 10 = %d\n 5 = %d\n 2 = %d\n 1 = %d\n",th,fhu,hu,ft,tw,ten,f,two,one);
    return 0;
}
