#include<stdio.h>
int main()
{
    for(int x=1;x<=10;x++)
    {
        for(int i=1;i<=10;i++)
        printf("%d ",x*i);
        printf("\n");
    }
    return 0;
}