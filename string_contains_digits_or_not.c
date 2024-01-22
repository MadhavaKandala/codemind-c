#include<stdio.h>
#include<string.h>

int main(){
    
    int t;
    scanf("%d", &t);
    for(int j = 0; j<t; j++){
        char n[100];
        scanf("%s",n);
        int count = 0;
         
        for(int i = 0; i < strlen(n); i++){
            if(n[i] >= '0' && n[i] <='9'){
                count = 1;
                break;
            }
        }
        printf("%s
",count == 1 ?"Yes" : "No");
    }
}