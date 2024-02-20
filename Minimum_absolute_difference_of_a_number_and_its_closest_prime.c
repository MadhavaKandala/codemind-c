#include<stdio.h>

int prime(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int closestprime(int num){
    int lower = num - 1;
    int upper = num + 1;
    
    while(1){
        if(prime(num)){
            return num; // if numer itself id prime returns prime no.
        }
        if(prime(lower)){
            return lower; // if lower number is prime returns lower no.
        }
        if(prime(upper)){
            return upper; // if upper number is prime returns upper no.
        }
        lower-- ; // if none, repeats the process until one prime is met.(U or L)
        upper++ ;
    }    
}

int absolute(int n){
    int closest = closestprime(n); // valid even if u and l are same difference.
    return (closest > n) ? closest - n : n - closest;
}


int main()
{
    int n;
    scanf("%d", &n);
    
    int diff = absolute(n);
    printf("%d", diff);
}