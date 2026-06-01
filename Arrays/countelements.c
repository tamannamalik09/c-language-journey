#include<stdio.h>
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int count = 0;
    for(int i = 0; i<=5; i++){
        if(arr[i]>2) {
            count = count + 1;
        }
    }  
    printf("count: %d",count); 
     return 0;
}