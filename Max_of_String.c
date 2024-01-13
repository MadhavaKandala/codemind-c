#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    fgets(n,sizeof(n), stdin);
    char max = '0';
    for(int i = 0; i<strlen(n); i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    
    printf("%c", max);
}