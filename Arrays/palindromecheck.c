#include<stdio.h>
void reverse( int arr[]){
    int i=0;
    int j =4;
    while(i<j){
        if (arr[i] != arr[j]){
            printf("Array is not a palindrome ");
            return;
        }
        i++;
        j--;
    }
     printf("Array is a palindrome ");
}
int main(){
    int arr[5] = {1,2,3,2,1};
    reverse(arr);
    for(int i=0; i<=4; i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}