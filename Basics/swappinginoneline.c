#include<stdio.h>
int main()
{ 
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d", &a, &b);
    b = (a+b)-(a=b);
    printf("After swapping: a = %d, b = %d", a, b);
    return 0;
}