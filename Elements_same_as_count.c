#include<stdio.h>

int main(){
    int n,flag=0,count;
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i= 0; i<n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count == arr[i]){
            printf("%d ",arr[i]);
            arr[i] = 0;
            flag = 1;
        }
    }
    if(flag != 1){
        printf("-1");
    }
}