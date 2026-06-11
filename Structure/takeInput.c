#include<stdio.h>
struct date
{
    int d,m,y;
};
struct date inputDate();
int main()
{
    struct date d1;
    d1 = inputDate();
    printf("%d/%d/%d",d1.d,d1.m,d1.y);
    return 0;
}
struct date inputDate()
{
    struct date somedate;
    printf("\nEnter date:");
    printf("Enter date(DD/MM/YYYY): ");
    scanf("%d/%d/%d",&somedate.d,&somedate.m,&somedate.y);
    return somedate;
}