#include<stdio.h>
int main(){
    // 3 1 2
    // 6 4 5
    // 9 7 8
    int arr[3][3] = {{3,1,2},{6,4,5},{9,7,8}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}