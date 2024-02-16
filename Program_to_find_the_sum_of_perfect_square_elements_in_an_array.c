#include<stdio.h>
#include<math.h>

int perfect(int n){
    int sqrtnum = sqrt(n); // should declare a variable to use sqrt function.
    return sqrtnum * sqrtnum == n;// returns true if perfect num else not.
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(perfect(arr[i])){ // if true then sum happens else not.
            sum += arr[i];
        }
    }
    printf("%d", sum);
}