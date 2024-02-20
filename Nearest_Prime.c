#include<stdio.h>
int isprime(int n){
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 1){
        return 1; // Is prime
    }
    return 0; // Is Not prime
}

int nearprime(int num){
    int smaller = num - 1;
    int larger = num + 1;
    
    while(true){
        if(isprime(smaller)){
            return smaller;
        }
        else if(isprime(larger)){
            return larger;
        }
        else {
            smaller--;
            larger++;
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);
    
    for(int i = 1; i<=t; i++){
        int n;
        scanf("%d", &n);
        if(isprime(n)){
            printf("%d
", n);
        }
        else{
        int result = nearprime(n);
        printf("%d
",result);
        }
    }
}