#include<stdio.h>

int isperfect(int n){
    int original = n;
    int sum = 0;
    for(int i = 1; i<n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == original){
        return 1; // is Perfect 
    }else return 0; // NOt Perfect
}

int main(){
    int n;
    scanf("%d", &n);
    
    if(isperfect(n)){
        printf("True");
    }else printf("False");
}