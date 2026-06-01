#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Enter expression(eg. 5 + 3): ");
    scanf("%lf %c %lf",&num1,&op,&num2);
    switch(op)
    {
        case '+': printf("result: %lf\n",num1 + num2);break;
        case '-': printf("result:%lf\n",num1-num2);break;
        case '*': printf("result: %lf\n",num1*num2);break;
        case '/': 
        if(num2 != 0) printf("result: %lf\n",num1/num2);
        else printf("division by zero is not defined");
        break;
        default:
        printf("unknown operator\n");
    }
    return 0;
}