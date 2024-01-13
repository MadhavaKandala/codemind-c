#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    fgets(x,sizeof(x),stdin);
    char n[2];
    scanf("%c",&n);
    int count = 0;
    for(int i=0; i<strlen(x)-1; i++){
        if(n[0] == x[i]){
            printf("True
%d",i);
            count = 1;
            break;
        }
    }
    if(count == 0){
        printf("False");
    }
}