#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for(int j = 0; j<t; j++){
        int a,b;
        int count = 0;
        scanf("%d %d", &a, &b);
        
        for(int i = a; i<=b; i++){
            if((i%10) == 2) count ++;
            else if((i%10) == 3) count ++;
            else if((i%10)  == 9) count ++;
            else continue;
        }
        printf("%d
", count);
    }
}