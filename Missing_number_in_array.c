#include<stdio.h>
#include<stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i<t; i++){
        int n;
        scanf("%d", &n);
        int arr[n],sum = 0;
        for(int j = 0; j<n-1; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        int natural_sum = n * (n+1) / 2;
        int missing_no = abs(natural_sum - sum);
        
        printf("%d
", missing_no);
    }
}