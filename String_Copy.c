#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char str2[100];
    strcpy(str2, str);
    printf("%s", str2);
}