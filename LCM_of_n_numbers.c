#include <stdio.h>

int lcm(int a, int b) {
    int max = (a > b) ? a : b;
    int lcm = max;

    while (1) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm += max;
    }

    return lcm;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    printf("%d
", result);

    return 0;
}
