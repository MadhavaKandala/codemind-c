#include<stdio.h>
#include<ctype.h>

int main(){
    char str[2006];
    scanf("%s", str);
    
    int count = 1;
    for(int i = 0; str[i] != NULL; i++){
        if(isupper(str[i]) && i != 0){
            count ++;
        }
    }
    printf("%d", count);
}
