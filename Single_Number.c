#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int result;
    for(int i = 0; i<n; i++){
        result ^= arr[i];
    }
    printf("%d", result);
}