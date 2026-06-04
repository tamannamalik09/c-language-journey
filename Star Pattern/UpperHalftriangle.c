// * * * *
// * * *
// * *
// *
#include<stdio.h>
int main()
{
    int lines;
    printf("Enter number of lines: ");
    scanf("%d",&lines);
    for(int i=1;i<=lines;i++)
    {
        for(int j=0;j<lines;j++) 
        {
            if(j<lines+1-i){
            printf("* ");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}