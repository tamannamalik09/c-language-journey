//TSRN - takes something, return nothing
#include<stdio.h>
void add(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    add(a,b);// CALL BY VALUE (a and b are actual arguments)
    return 0;
}
void add(int x,int y)// x and y are formal arguments
{
    int z;
    z = x+y;
    printf("sum is %d",z);
}