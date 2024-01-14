#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    int count = 1;
    for(int i =0; i<sizeof(str); i++){
        if(str[i] == ' '){
            count ++;
        }
    }
    printf("%d", count);
}