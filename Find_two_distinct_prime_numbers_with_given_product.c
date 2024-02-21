#include<stdio.h>
#include<math.h>

int prime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;    
}
int main()
{
    int num;
    scanf("%d", &num);
    
   
    int i , j;
    for(i = 2; i <= sqrt(num); i++){
        if(prime(i)){
            j = num / i; // i * j == number (base condition)
            if(prime(j) && num % j == 0){ // number is divisible by j(base condtn is right)
                printf("%d %d ",i , j);
                break;
            }
        }
    }
   
   if(i >= sqrt(num)){
       printf("-1");
   }
}