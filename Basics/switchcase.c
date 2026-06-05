#include<stdio.h>
#include<stdlib.h>
int main()
{
   int x,r,l,b,ar;
   float a;
   while(1)
   {
     printf("\n1. Area of a circle");
      printf("\n2. Area of a rectangle");
      printf("\n3. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&x);
      switch(x)
      {
        case 1:
         printf("\nEnter radius of circle: ");
         scanf("%d",&r);
         a = 3.14*r*r;
         printf("area: %f",a);
        case 2:
         printf("\nEnter length and breadth of rectangle: ");
         scanf("%d%d",&l,&b);
         ar = l*b;
         printf("area of rectangle: %d",ar);
        case 3:
         exit(0);
        default:
         printf("\nInvalid choice");
      }
      return 0;
    }
}