#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count[1008] = {0};
    for(int i = 0; i< n; i++){
        if(count[arr[i]] == 0){
            printf("%d ", arr[i]);
            count[arr[i]] = 1;
        }
    }
    
}