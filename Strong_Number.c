#include<stdio.h>

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }else {
        return n*fact(n-1);
    }
}

int isstrong(int n){
    int original = n;
    int sum = 0;
    while(n>0){
        int digit = n % 10;
        sum += fact(digit);
        n/=10;
    }
    if(original == sum){
        return 1; // strong number
    }else return 0; // not strong number
}
int main(){
    int t;
    scanf("%d", &t);
    
    for(int i = 1; i<=t; i++){
        int m;
        scanf("%d", &m);
        
        if(isstrong(m)){
            printf("Strong
");
        }else printf("Not Strong
");
    }
}