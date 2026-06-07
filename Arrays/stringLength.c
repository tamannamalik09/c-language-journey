#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10] = "BHOPAL";//string constant
    int i;
    for(i = 0;str[i]; i++);
    printf("length is %d",i);
    getch();
    return 0;
}