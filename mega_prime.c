#include<stdio.h>

int isprime(int num){
    if(num == 1){
        return 0;
    }
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i ==0){
            count++;
        }
    }
    if(count == 2)return 1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    if(isprime(n) == 0){
        printf("Not Mega Prime");
    }
    else{
        if(isprime(n)){
            int found = 1;
            while(n > 0){
                int rem = n % 10;
                if(!isprime(rem)){
                    found = 0;
                    break;
                }
                n = n/10;
            }
        if(found) printf("Mega Prime");
        else printf("Not Mega Prime");
        }
    }
}