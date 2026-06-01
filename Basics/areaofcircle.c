#include<stdio.h>
int main(){
    float radius;
    float area;
    printf("Enter radius:");
    scanf("%f",&radius);
    area = 3.141*radius*radius ;
    printf("Area of circle : %f",area);
    return 0;
}