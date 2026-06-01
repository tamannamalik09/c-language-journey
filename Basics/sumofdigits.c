#include<stdio.h>
int main(){
    //12345 => 5+4+3+2+1
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
     int last_digit ;
    while(n != 0){
        last_digit = n % 10 ;
        sum = sum + last_digit;
         n=n/10;
    } 
    printf("sum of digits: %d ",sum);
    return 0;
}