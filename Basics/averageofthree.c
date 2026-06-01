#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter any 3 numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Average: %lf",(a+b+c)/3.0);
    return 0;
}