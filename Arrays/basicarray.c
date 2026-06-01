#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,1};
    printf("%d\n",arr[4]);
    arr[4] = 100; // 2,3,4,5,100
    printf("%d\n",arr[4]);
    float a[4]= {1.8,4.3,3.5,7};
    printf("%f\n",a[3]);
    char c[5]={'a','c','#','&','s'};
    printf("%c\n",c[2]);
    return 0;
}