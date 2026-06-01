#include<stdio.h>
int main()
{
    int a = 20;
    int b = 10;
    printf("value of a and b:%d %d\n",a,b);
    printf("After swaping: ");
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a:%d\n",a);
    printf("b:%d ",b);
    return 0;
}