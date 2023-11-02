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
    int c;
    int count = 0;
    scanf("%d", &c);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(c == arr[i][j]){
                count += 1;
            }
        }
    }
    if(count > 0){
        printf("1");
    }else printf("0");
}