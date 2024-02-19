#include<stdio.h>

int main(){
    int a[3],b[3];
    for(int i = 0; i<3; i++){
        scanf("%d", &a[i]);
    }for(int i = 0; i<3; i++){
        scanf("%d", &b[i]);
    }
    int alice = 0, bob = 0;
    
    for(int i = 0; i<3; i++){
        if(a[i] == b[i]) continue;
        if(a[i] < b[i]) bob++;
        if(a[i] > b[i]) alice++;
    }
    printf("%d %d", alice, bob);
}