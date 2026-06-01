#include<stdio.h>
int main (){
    int a;
    int b;
    printf("Enter a and b:");
    scanf(" %d \n%d",&a,&b);
    if(a>b){
        printf("a is greater");
    }  
    else 
    { 
        printf("b is greater");
    }
}