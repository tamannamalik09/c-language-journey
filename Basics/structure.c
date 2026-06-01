#include<stdio.h>
struct student {
    int roll_no ;
    char name[30];
};
int main()
{
     struct student s1;
    printf("Enter student roll no: ");
    scanf("%d",&s1.roll_no);
    printf("Enter student name : ");
    scanf ("%s",&s1.name);
    printf (" roll no: %d\n",s1.roll_no);
    printf("name: %s",s1.name);
    return 0;
}