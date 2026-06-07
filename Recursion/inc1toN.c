#include<stdio.h> 
void increasing (int n){
    if( n>0)
    { 
        increasing (n-1); // call
        printf("%d ",n); // code
    }
}
int main(){ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}