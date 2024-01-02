#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int lastdigit = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] % 2 != 0){
            lastdigit = i;
        }
    }
    if(lastdigit != 0){
        printf("%d", lastdigit);
    }
}