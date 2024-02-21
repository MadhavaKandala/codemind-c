#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    
    for(int i = a; i<= b; i++){
        int reversed = 0, temp, r;
        temp = i;
        while(temp){
            r = temp % 10;
            reversed = reversed * 10 + r;
            temp/=10;
        }
        if(i == reversed){
        printf("%d ", i);
        }
    }
}