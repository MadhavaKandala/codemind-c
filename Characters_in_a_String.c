#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    fgets(n, sizeof(n),stdin);
    
    printf("%d",strlen(n)-1);
}