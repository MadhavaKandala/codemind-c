#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    
    
    if(strcmp(str,str2) == 0){
        printf("Strings are Equal");
    }else printf("Strings are not Equal");
}