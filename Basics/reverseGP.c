#include<stdio.h>
int main(){
    //100,50,25,12.5,...n
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    float a = 100;
    for ( int i = 1; i<+n; i++){
        printf("%f ",a);
        a = a/2;
    }
    return 0;
}