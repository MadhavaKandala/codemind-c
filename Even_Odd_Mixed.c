#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int iseven = 1, isodd = 1;
    while(n>0){
        int rem = n% 10;
        if(rem % 2 == 0){
            iseven = 0;
        }
        if(rem % 2 != 0){
            isodd = 0;
        }
        n/= 10;
    }
    if(iseven == 0 && isodd == 0){
        printf("Mixed");
    }else if(iseven == 0 && isodd == 1){
        printf("Even");
    }else if(iseven == 1 && isodd == 0){
        printf("Odd");
    }
}