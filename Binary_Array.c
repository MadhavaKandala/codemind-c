#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int binary[n];
    
    for(int i = 0; i<n; i++){
        scanf("%d", &binary[i]);
    }
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if(binary[i] == 0 || binary[i] == 1){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("True");
    }else printf("False");
    
}