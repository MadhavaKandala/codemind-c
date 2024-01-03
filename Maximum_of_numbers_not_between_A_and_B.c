#include<stdio.h>

int main(){
    int a,b,n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &a, &b);
    int max = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] < a || arr[i] > b){
            if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    if(max == 0){
        printf("-1");
    }else printf("%d", max);
}