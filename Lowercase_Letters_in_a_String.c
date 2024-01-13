#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for(int i = 0; i<strlen(str)-1; i++){
        if(str[i] >='a' && str[i] <='z'){
            count ++;
        }
    }
    printf("%d", count);
}