#include<stdio.h>

int sum_prod_diff(int n){
    int sum = 0, prod = 1;
    while(n>0){
        int rem = n % 10;
        sum += rem;
        prod *= rem;
        n/=10;
    }
    int diff = prod - sum;
    return diff;
}

int main(){
    int n;
    scanf("%d" ,&n);
    printf("%d", sum_prod_diff(n));
}