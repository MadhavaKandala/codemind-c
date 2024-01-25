#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count[n] = {0};
    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int result = -1;
    for(int i = 0; i<n; i++){
        if(count[i] == i){
            result++;
        }
    }
    printf("%d", result);
}
