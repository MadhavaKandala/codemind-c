#include<stdio.h>
#include<ctype.h>

int isdecimal(char *str){
    for (int i = 0; str[i] != NULL; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    
    
    for(int i = 0; i<t; i++){
        char str[1000];
        scanf("%s", str);
        isdecimal(str);
        if(isdecimal(str)){
            printf("True
");
        }
        else printf("False
");
    }
    
    return 0;
}