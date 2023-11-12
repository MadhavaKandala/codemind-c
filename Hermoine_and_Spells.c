#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && b>c){
        printf("%d", a+b);
    }else if(b>a && a>c){
        printf("%d", a+b);
    }else if(a>b && c>a){
        printf("%d", a + c);
    }else if(c>b && b>a){
        printf("%d", c+b);
    }
}