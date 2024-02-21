#include<stdio.h>
int isperfect(int n){
    
    for(int i = 1;i<=n; i++){
        if(i * i == n){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d" ,&n);
    
    
    if(isperfect(n)){
         printf("True");
    }
    else printf("False");
}