#include<stdio.h>
int main(){
    int a, c = 0;
    printf("Enter value of a: ");
    scanf("%d",&a);
    for( int i=1; i<=10; i++){
        c = i*a ;
        printf(" %d x %d = %d\n ",a,i,c);
    }
    return 0;
}