#include<stdio.h>
void increasing(int a,int n){
    if(a>n) return;
    printf("%d ",a);
    increasing(a+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}