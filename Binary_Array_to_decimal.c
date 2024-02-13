#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int binary[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &binary[i]);
    }
    int base = 1;
    int decimal = 0;
    for (int i = n - 1; i >= 0; i--) {
        decimal += binary[i] * base;
        base *= 2;
    }
    printf("%d", decimal);
}