#include<stdio.h>
int main(){
    int arr[6] = {23,45,87,56,17,89};
    int min = arr[0];
    for (int i = 1; i<=5; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("Minimum value: %d ",min);
    return 0;
}