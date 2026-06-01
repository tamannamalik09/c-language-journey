#include<stdio.h>
#include<conio.h>
int main(){
    double x;
    int y,a,r;
    y = sizeof(x);
    printf("%d\n",y);
    r = sizeof(1/2);
    printf("%d",r);
    getch();
    return 0;
}