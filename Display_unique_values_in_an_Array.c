#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int notfound = 0;
    for(int i = 0; i<n; i++){
        int repeated = 0;
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                repeated = 1;
                break;
            }
        }
        if(!repeated){
            printf("%d ", arr[i]);
            notfound = 1;
        }
    }
    if(notfound==0){
        printf("-1");
    }
}