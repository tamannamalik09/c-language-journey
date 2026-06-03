#include<stdio.h>
#include<conio.h>3
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*n+1-2*i);
        i++;
    }
    getch();
    return 0;
}