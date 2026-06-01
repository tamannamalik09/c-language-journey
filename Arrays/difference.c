#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int esum = 0;
    int osum = 0;
    for(int i = 0; i<=7; i ++){
        if(i%2 == 0){
            esum = esum + arr[i];
        }
        else{
            osum = osum + arr[i];
        }
    } printf("difference: %d",esum-osum);
    return 0;
}