#include<stdio.h>
#include<string.h>
int main(){
    char n[100];
    fgets(n,sizeof(n),stdin);
    int i,j;
    int len = strlen(n)-1;
    for(i=0,j=len-1;i<j;i++,j--){
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
    }
    printf("%s",n);
}