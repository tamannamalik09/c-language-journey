#include<stdio.h>

    void australia(){
        printf("AUSTRALIA\n");
        return;
    }
    int main(){
        void india();
        india();// function calling
        return 0;
    }
void india(){
    printf("INDIA\n");
    void australia();// function prototyping
    australia();// function calling
    return;
    }