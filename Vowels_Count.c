#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    int count = 0;
    for(int i = 0; i<sizeof(str); i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
            count ++;
        }
    }
    printf("%d", count);
}