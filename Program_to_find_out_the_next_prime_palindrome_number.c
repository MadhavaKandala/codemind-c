#include<stdio.h>

int isprime(int n){
    int count = 0;
    for(int i = 1; i<= n; i++){
        if(n % i == 0) count++;
    }
    if(count == 2) return 1;
    return 0;
}

int palindrome(int n){
    int reversed = 0, temp, r;
    temp = n;
    while(temp){
        r = temp % 10;
        reversed = reversed * 10 + r;
        temp /= 10;
    }
    if(reversed == n) return 1;
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    
    for(int i = n+2; ;i++){
        if(isprime(i) && palindrome(i)){
            printf("%d", i);
            break;
        }
    }
}