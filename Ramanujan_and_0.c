#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    if(n==0){
        printf("%d", 1);
    }else{
        printf("%d", 3*n);
    }
}