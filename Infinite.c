#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    
    while(n != -1){
        scanf("%d
", &n);
        if(n == -1){
            break;
        }
        printf("%d
", n*n);
        
    }
}    