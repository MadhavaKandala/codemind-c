#include <stdio.h>

int count_numbers_between_even_odd(int arr[], int n) {
    int count = 0;

    for (int i = 1; i < n-1; i++) {
        if((arr[i+1] % 2 == 0 && arr[i-1] % 2 != 0) ||
           (arr[i+1] % 2 != 0 && arr[i-1] % 2 == 0)  ){
               count ++;
           }
    }

    if((arr[0] % 2 == 0 && arr[n-2] % 2 != 0) ||
       (arr[0] % 2 != 0 && arr[n-2] % 2 == 0)){
            count ++;
    }
    if((arr[1] % 2 == 0 && arr[n-1] % 2 != 0) ||
       (arr[1] % 2 != 0 && arr[n-1] % 2 == 0)){
            count ++;
    }
    
    return count;
}


int main() {
    int n;
    scanf("%d", &n);
      
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int x = count_numbers_between_even_odd(arr,n);
    printf("%d", x);
}
