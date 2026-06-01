#include<stdio.h>
int main(){
    int a = 25;
    int* x;
    x = &a;// == int* x = &a
    *x = 7;// we can assign and change values later too
    printf("%p\n",&a);// %p ->used to print address
    printf("%p\n",x);
    printf("%d\n",*x);// x me jo variable ka address hai uski "value" print ho jati hai
    printf("%d",a);
    return 0;
}