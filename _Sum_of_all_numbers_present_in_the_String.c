#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    fgets(n, sizeof(n),stdin);
    int sum=0;
    for(int i = 0; i<strlen(n); i++){
        if(n[i] >='0' && n[i] <='9'){
            sum += n[i] - '0';
        }
    }
    printf("%d",sum);
}