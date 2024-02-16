#include<stdio.h>
int countEvenDigits(long long int nums[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        long long int num = nums[i];
        int digitCount = 0;
        while (num != 0) {
            digitCount++;
            num /= 10;
        }
        if (digitCount % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%lld", &arr[i]);
    }
    int result = countEvenDigits(arr, n);
    printf("%d", result);
}