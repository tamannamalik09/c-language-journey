#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    printf("Upper-case alphabet");
    else if(x>='a' && x<='z')
    printf("Lower-case alphabet");
    else if(x>='0' && x<='9')
    printf("Digit");
    else printf("Special character");
    getch();
    return 0;
}