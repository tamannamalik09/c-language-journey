#include<stdio.h>
struct date
{
    int d,m,y;
};
struct date inputDate();
void showDate(struct date);
int main()
{
    struct date d1;
    d1 = inputDate();
    showDate(d1);
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
void showDate(struct date somedate)
{
    printf("%d/%d/%d",somedate.d,somedate.m,somedate.y);
}