#include<stdio.h>
int maximum(int arr[], int n, int maxdiff){
    
    int score = 0, skipped = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i] > maxdiff){
            skipped++;
            if(skipped > 1){
                return score;
            }
        }
        else {
            score++;
        }
    }
    return score;
    
}
int main(){
    int n,difficulty;
    scanf("%d %d", &n, &difficulty);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
   printf("%d", maximum(arr,n, difficulty));
}