#include<stdio.h>
int main() 
{
    double radius,area;
    printf("Enter radius of circle: ");
    scanf("%lf",&radius);
    area = radius*radius*3.14;
    printf("area: %lf",area);
    return 0;
}