#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int esum=0,osum=0;
    for( int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] % 2 == 0){
                esum += arr[i][j];
            }else{
                osum += arr[i][j];
            }
        }
    }
    
    printf("%d %d", esum, osum);
    
}