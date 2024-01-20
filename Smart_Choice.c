#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    
    int x = (500 - (2 * a)) + (1000 - ((a+b)*4));
    int y = (1000 - (b*4)) + (500 - ((a+b)*2));
    
    printf("%d", (x > y) ? x : y);
}