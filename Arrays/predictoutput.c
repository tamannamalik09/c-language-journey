#include<stdio.h>
int main(){
    int sub[50],i;
    for(i=0; i <= 48; i++);// loop chlega lekin semincolon ki wajah se aage nhi jayega toh 49 pe value aake loop band ho jayega or aage value i ki 49 print hogi
    {
        sub[i] = i;
        printf("\n%d",sub[i]);
    }
    return 0;
}