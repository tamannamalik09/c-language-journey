#include<stdio.h>
int main(){
    //12345 => 54321
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ld;
    while( n != 0){
        ld = n%10;
        printf("%d",ld);
        n = n/10;
    }
    return 0;
}