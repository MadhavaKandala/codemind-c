#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char str2[100];
    strcpy(str2, str);
    char temp[100];
    int len = strlen(str)-1;
    for(int i = 0; i<len/2; i++){
        temp[0] = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp[0];
    }
    
    if(strcmp(str,str2) == 0){
        printf("Palindrome");
    }else printf("Not Palindrome");
}