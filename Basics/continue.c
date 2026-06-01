#include<stdio.h>
int main(){
    //even numbers 1 to 100
    int a=0;
    int i;
    for( i = 1; i<=100; i++){ 
        if (i%2 != 0){
            continue;
        }
        else{
            printf("%d ",i);
        }
    }
    return 0;
}