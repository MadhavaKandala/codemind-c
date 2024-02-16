#include<stdio.h>

int hcf(int a, int b) {
    if(b != 0){
        return hcf(b , a % b);
    }
    else return a;
   
}

int array_hcf(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = hcf(result, arr[i]);
    }
    return result;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", array_hcf(arr,n));
}