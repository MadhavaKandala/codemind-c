#include<stdio.h>

int main(){
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    
    printf("%d", ((n-1)/(m*k)) +1);
}