#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    int printed = 0;
    scanf("%d", &k);
    int count[1008] = {0};
    for(int i = 0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i = 0; i<n; i++){
        if(count[arr[i]] == k){
            printf("%d ", arr[i]);
            count[arr[i]] = 0;
            printed = 1;
        }
    }
    if(!printed){
        printf("-1");
    }
}