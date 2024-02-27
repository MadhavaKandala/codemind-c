// Binary search
#include<stdio.h>

int main(){
    int n, data;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &data);
    int low, mid, high;
    low = 0;
    high = n - 1;
    int flag = 1;
    while(low<=high){
        mid = (low + high) / 2;
        if(arr[mid] == data){
            printf("True");
            flag = 0;
            break;
        }
        if(arr[mid] < data){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    if(flag) printf("False");
}