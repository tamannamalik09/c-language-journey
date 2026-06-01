#include<stdio.h>
int fibonacci(int a, int b){
    // 1 1 2 3 5 8 13 21 34 55 89 144 ....
    if (a>100) return 0;
    printf("%d ",a);
    int f = fibonacci (b,a+b);
}
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    int f = fibonacci(a,b);
    return 0;
}