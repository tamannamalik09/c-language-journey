#include <stdio.h>
#include<conio.h>
int main(){
    // GP: 1,2,4,8,16,32...n
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (int i = 1; i<=n; i = i*2){ 
        printf("%d ",i);
    }
    getch();
    return 0;
}