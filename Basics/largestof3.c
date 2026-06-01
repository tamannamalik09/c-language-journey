#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter values of a,b,c:");
    scanf("%d \n%d \n%d",&a,&b,&c);
    if(a>b && a>c){
        printf("a is largest");
    }
    if ( b>a && b>c){
        printf("b is largest");
    }
    if(c>a && c>b){
        printf("c is largest");
    }
    return 0;
}