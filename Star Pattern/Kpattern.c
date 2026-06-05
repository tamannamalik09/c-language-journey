// * * * * 
// * * *
// * *
// *
// * *
// * * *
// * * * *
#include<stdio.h>
int main()
{
    for(int i = 1;i<=7;i++)
    {
        for(int j = 1; j<=4; j++)
        {
            if(j<=5-i || j<=i-3)
            {
                printf("* ");
            }
             else printf("  ");
        }
        printf("\n");
    }
    return 0;
}