#include<stdio.h>

int add(int, int);
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    add(a,b);
}
int add(int a, int b){
    printf("%d", a+b);
    return 0;
}