#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int sum = 0;
    int totalPairs = 0;
    int x = 12;
    int f = arr[0];
    for(int i=1; i <= 7; i++){
        for (int j = i+1; j<=7 ; j++){
            if(arr[i] + arr[j] == x)
            {
           totalPairs = totalPairs + 1;
           printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("totalPairs : %d",totalPairs);
    return 0;
 }