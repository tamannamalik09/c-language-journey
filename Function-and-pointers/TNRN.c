//TNRN - takes nothing, returns nothing 
#include<stdio.h> // header file includes declaration of functions
void add();//function declaration(so we can call it throughout the program)
int main()
{
    add();//function call
    return 0;
}
void add()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("Sum is %d",c);
}