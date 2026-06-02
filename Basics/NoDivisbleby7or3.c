#include<stdio.h>
#include<conio.h>
int main()
{ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if( n%7 == 0 || n%3 == 0 )
        printf("The number is divisible by 7 or 3");
    else
        printf("The number is not divisible by 7 or 3");
    getch();
    return 0;
}