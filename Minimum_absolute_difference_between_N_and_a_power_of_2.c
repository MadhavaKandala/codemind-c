#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int power = 1;
    int mindiff = abs(n - power);
    
    while(power < INT_MAX /2){
        power *= 2;
        mindiff = (abs(power - n) < mindiff) ? abs(power - n) : mindiff;
    }
    printf("%d", mindiff);
}