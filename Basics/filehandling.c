#include<stdio.h>
#include<conio.h>
int main(){
    FILE *source ,*target;
    char ch;
    source = fopen ("A.text","r");
    target = fopen ("B.text","w");
    if (source == NULL || target == NULL)
    { 
        printf("error in opening file");
        return 1; 
    }
    while((ch = fgetc(source))!=EOF){
        fputc(ch, target);
    }
    printf ("file opened successfully");
    fclose(source);
    fclose(target);
}